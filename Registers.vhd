----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:45:48 05/15/2014 
-- Design Name: 
-- Module Name:    Regsiters - Behavioral 
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

entity Registers is
    Port ( clk_i : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           RegWrite : in  STD_LOGIC;
           ReadRegister1 : in  STD_LOGIC_VECTOR (4 downto 0);
           ReadRegister2 : in  STD_LOGIC_VECTOR (4 downto 0);
           WriteRegister : in  STD_LOGIC_VECTOR (4 downto 0);
           WriteData : in  STD_LOGIC_VECTOR (7 downto 0);
           ReadData1 : out  STD_LOGIC_VECTOR (7 downto 0);
           ReadData2 : out  STD_LOGIC_VECTOR (7 downto 0));
end Registers;

architecture Behavioral of Registers is

	signal register0 : std_logic_vector(7 downto 0):=(others=>'0');
	signal register1 : std_logic_vector(7 downto 0):=(others=>'0');
	signal register2 : std_logic_vector(7 downto 0):=(others=>'0');
	signal register3 : std_logic_vector(7 downto 0):=(others=>'0');
	signal register4 : std_logic_vector(7 downto 0):=(others=>'0');
	signal register5 : std_logic_vector(7 downto 0):=(others=>'0');
	signal register6 : std_logic_vector(7 downto 0):=(others=>'0');
	signal register7 : std_logic_vector(7 downto 0):=(others=>'0');

begin

	process(reset, clk_i)
	begin
	if(reset='1') then
		register0<=(others=>'0');
		register1<=(others=>'0');
		register2<=(others=>'0');
		register3<=(others=>'0');
		register4<=(others=>'0');
		register5<=(others=>'0');
		register6<=(others=>'0');
		register7<=(others=>'0');
	elsif(clk_i'event and clk_i='1') then
		if(RegWrite='1') then
			case WriteRegister is
				when "00000" =>
					register0 <= WriteData;
				when "00001" =>
					register1 <= WriteData;	
				when "00010" =>
					register2 <= WriteData;
				when "00011" =>
					register3 <= WriteData;
				when "00100" =>
					register4 <= WriteData;
				when "00101" =>
					register5 <= WriteData;
				when "00110" =>
					register6 <= WriteData;
				when "00111" =>
					register7 <= WriteData;
				when others =>
				
			end case;
		end if;
		
		case ReadRegister1 is
				when "00000" =>
					ReadData1 <= register0;
				when "00001" =>
					ReadData1 <= register1;	
				when "00010" =>
					ReadData1 <= register2;
				when "00011" =>
					ReadData1 <= register3;
				when "00100" =>
					ReadData1 <= register4;
				when "00101" =>
					ReadData1 <= register5;
				when "00110" =>
					ReadData1 <= register6;
				when "00111" =>
					ReadData1 <= register7;
				when others =>
					ReadData1 <= "ZZZZZZZZ";
		end case;
		
		case ReadRegister2 is
				when "00000" =>
					ReadData2 <= register0;
				when "00001" =>
					ReadData2 <= register1;	
				when "00010" =>
					ReadData2 <= register2;
				when "00011" =>
					ReadData2 <= register3;
				when "00100" =>
					ReadData2 <= register4;
				when "00101" =>
					ReadData2 <= register5;
				when "00110" =>
					ReadData2 <= register6;
				when "00111" =>
					ReadData2 <= register7;
				when others =>
					ReadData2 <= "ZZZZZZZZ";
		end case;
	end if;
	
	end process;

end Behavioral;

