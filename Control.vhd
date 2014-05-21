----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:41:37 05/14/2014 
-- Design Name: 
-- Module Name:    Control - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Control is
    Port ( clk_i : in STD_LOGIC;
			  reset : in STD_LOGIC;
			  en : in STD_LOGIC;
			  Op : in  STD_LOGIC_VECTOR (5 downto 0);
           PCWriteCond : out  STD_LOGIC;
           PCWrite : out  STD_LOGIC;
           IorD : out  STD_LOGIC;
           MemRead : out  STD_LOGIC;
           MemWrite : out  STD_LOGIC;
           MemToReg : out  STD_LOGIC;
           IRWrite : out  STD_LOGIC_VECTOR (3 downto 0);
           PCSource : out  STD_LOGIC_VECTOR (1 downto 0);
           ALUOp : out  STD_LOGIC_VECTOR (1 downto 0);
           ALUSrcB : out  STD_LOGIC_VECTOR (1 downto 0);
			  ALUSrcA : out  STD_LOGIC;
			  RegWrite : out  STD_LOGIC;
			  RegDest : out  STD_LOGIC);
end Control;

architecture Comportamental of Control is

	type estados is (estado0,estado1,estado2,estado3,estado4,estado5,estado6,estado7,
							estado8,estado9,estado10,estado11,estado12,estado13);
	signal estado_actual : estados := estado0;
	

begin

	TRANSICIONES:
	process(reset, clk_i)
	begin

	if (reset = '1') then
			estado_actual <= estado0;		--Return to initial state on a reset
		elsif (clk_i'event and (clk_i = '1')) then
		if(en = '1') then
		case estado_actual is
				when estado0 =>
					estado_actual <= estado1;
				when estado1 =>
					estado_actual <= estado2;
				when estado2 =>
					estado_actual <= estado3;
				when estado3 =>
					estado_actual <= estado4;
				when estado4 =>
					if (Op = "100000" or Op = "101000" or Op = "001000") then -- sb or lb or addi
						estado_actual <= estado5;
					elsif (Op = "000000") then 										 -- R type
						estado_actual <= estado10;
					elsif (Op = "000100") then											 -- BEQ
						estado_actual <= estado12;
					elsif (Op = "000010") then											 -- J
						estado_actual <= estado13;
					end if;
				when estado5 =>
					if (Op = "100000") then				-- LB
						estado_actual <= estado6;
					elsif (Op = "101000") then			-- SB
						estado_actual <= estado8;
					elsif (Op = "001000") then			-- ADDI
						estado_actual <= estado9;
					end if;
				when estado6 =>
					estado_actual <= estado7;
				when estado7 =>
					estado_actual <= estado0;
				when estado8 =>
					estado_actual <= estado0;
				when estado9 =>
					estado_actual <= estado0;
				when estado10 =>
					estado_actual <= estado11;
				when estado11 =>
					estado_actual <= estado0;
				when estado12 =>
					estado_actual <= estado0;
				when estado13 =>
					estado_actual <= estado0;
					
			end case;
		end if;
	end if;

	end process;
	
	
	SALIDAS:
	
	process(reset, estado_actual)
	begin
		PCWriteCond <= '0';
      PCWrite <= '0';
      IorD <= '0';
      MemRead <= '0';
      MemWrite <= '0';
      MemToReg <= '0';
      IRWrite <= "0000";		
      PCSource <= "00";
      ALUOp <= "00";
      ALUSrcB <= "00";
		ALUSrcA <= '0';
		RegWrite <= '0';
		RegDest <= '0';
		
		if(reset='1') then
			--estado_actual <= estado0;
		end if;
		
		case estado_actual is
			when estado0 =>
			  PCWrite <= '1';
           IorD <= '0';
           MemRead <= '1';
           IRWrite <= "1000";		--IRWrite3 
           PCSource <= "00";
           ALUOp <= "00";
           ALUSrcB <= "01";
			  ALUSrcA <= '0';
			when estado1 =>
				MemRead <= '1';
				ALUSrcA <= '0';
				IorD <= '0';
				IRWrite <= "0100";	--IRWrite2
				ALUSrcB <= "01";
				ALUOp <= "00";
				PCWrite <= '1';
				PCSource <= "00";
			when estado2 =>
				MemRead <= '1';
				ALUSrcA <= '0';
				IorD <= '0';
				IRWrite <= "0010";	--IRWrite1
				ALUSrcB <= "01";
				ALUOp <= "00";
				PCWrite <= '1';
				PCSource <= "00";
			when estado3 =>
				MemRead <= '1';
				ALUSrcA <= '0';
				IorD <= '0';
				IRWrite <= "0001";	--IRWrite0
				ALUSrcB <= "01";
				ALUOp <= "00";
				PCWrite <= '1';
				PCSource <= "00";
			when estado4 =>
				ALUSrcA <= '0';
				ALUSrcB <= "11";
				ALUOp <= "00";
			when estado5 =>
				ALUSrcA <= '1';
				ALUSrcB <= "10";
				ALUOp <= "00";
			when estado6 =>
				MemRead <= '1';
				IorD <= '1';
			when estado7 =>
				RegDest <= '0';
				RegWrite <= '1';
				MemToReg <= '1';
			when estado8 =>
				MemWrite <= '1';
				IorD <= '1';
			when estado9 =>
				RegDest <= '0';
				RegWrite <= '1';
				MemToReg <= '0';
			when estado10 =>
				ALUSrcA <= '1';
				ALUSrcB <= "00";
				ALUOp <= "10";
			when estado11 =>
				RegDest <= '1';
				RegWrite <= '1';
				MemToReg <= '0';
			when estado12 =>
				ALUSrcA <= '1';
				ALUSrcB <= "00";
				ALUOp <= "01";
				PCWriteCond <= '1';
				PCSource <= "10";
			when estado13 =>
				PCWrite <= '1';
				PCSource <= "10";		
		end case;
		
	end process;


end Comportamental;

