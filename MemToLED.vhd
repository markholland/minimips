----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    08:55:28 05/28/2014 
-- Design Name: 
-- Module Name:    MemToLED - Behavioral 
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

entity MemToLED is
    Port ( Mem_in : in  STD_LOGIC_VECTOR (7 downto 0);
           address : in  STD_LOGIC_VECTOR (7 downto 0);
           Port0 : out  STD_LOGIC_VECTOR (7 downto 0);
           Port1 : out  STD_LOGIC_VECTOR (7 downto 0);
           Port2 : out  STD_LOGIC_VECTOR (7 downto 0));
end MemToLED;

architecture Behavioral of MemToLED is

	signal auxPort0 : std_logic_vector(7 downto 0);
	signal auxPort1 : std_logic_vector(7 downto 0);
	signal auxPort2 : std_logic_vector(7 downto 0);

begin

	process(Mem_in, address)
	begin
	case address is
		when "11111101"	=>	--253
			auxPort0 <= Mem_in;
		when "11111110"	=>	--254
			auxPort1 <= Mem_in;
		when "11111111"	=>	--255
			auxPort2 <= Mem_in;
		when others =>
	end case;
	end process;
	
	Port0 <= auxPort0;
	Port1 <= auxPort1;
	Port2 <= auxPort2;
	

end Behavioral;

