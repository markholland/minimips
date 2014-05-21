----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:32:16 05/14/2014 
-- Design Name: 
-- Module Name:    ALUControl - Behavioral 
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

entity ALUControl is
    Port ( aluop : in  STD_LOGIC_VECTOR (1 downto 0);
           funct : in  STD_LOGIC_VECTOR (5 downto 0);
           alucontrol : out  STD_LOGIC_VECTOR (2 downto 0));
end ALUControl;

architecture Behavioral of ALUControl is

begin

	process(aluop, funct)
		begin
			case aluop is
				when "00" => 			
					alucontrol <= "010";				-- ADD
				when "01" =>
					alucontrol <= "110";				-- SUB
				when "10" =>
					case funct is
						when "100000" =>
							alucontrol <= "010";		-- ADD
						when "100010" =>
							alucontrol <= "110";		-- SUB
						when "100100" =>
							alucontrol <= "000";		-- AND
						when "100101" =>
							alucontrol <= "001";		-- OR
						when "101010" =>
							alucontrol <= "111";		-- SLT
						when others => 
							alucontrol <= "XXX";				-- Not defined
					end case;
				when others => 
					alucontrol <= "XXX";				-- Not defined
			end case;
	end process;
	


end Behavioral;

