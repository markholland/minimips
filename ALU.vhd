----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:53:12 05/14/2014 
-- Design Name: 
-- Module Name:    ALU - Behavioral 
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
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_SIGNED.ALL;
use ieee.numeric_std.all;


-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ALU is
    Port ( ALUSrcA : in  STD_LOGIC_VECTOR (7 downto 0);
           ALUSrcB : in  STD_LOGIC_VECTOR (7 downto 0);
           alucontrol : in  STD_LOGIC_VECTOR (2 downto 0);
           Zero : out  STD_LOGIC;
           ALUResult : out  STD_LOGIC_VECTOR (7 downto 0));
end ALU;

architecture Behavioral of ALU is

	signal auxresult : std_logic_vector(7 downto 0) := (others=>'0');

begin

	process(alucontrol, ALUSrcA, ALUSrcB)
		begin
			zero <= '0';
			case alucontrol is
				when "010" =>				-- ADD
					auxresult <= ALUSrcA + ALUSrcB;
				when "110" =>				-- SUB
					auxresult <= ALUSrcA - ALUSrcB;
					if ALUSrcA - ALUSrcB = 0 then
						Zero <= '1';
					end if;
				when "000" =>				-- AND
					auxresult <= ALUSrcA and ALUSrcB;
				when "001" =>				-- OR
					auxresult <= ALUSrcA or ALUSrcB;
				when "111" =>				-- SLT
					auxresult <= "00000000";
					if (ALUSrcA < ALUSrcB) then
						Zero <= '1';
					end if;
				when others =>
					auxresult <= "00000000";	
			end case;
	end process;
	
	ALUResult <= auxresult;
	

end Behavioral;

