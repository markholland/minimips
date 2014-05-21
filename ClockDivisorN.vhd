----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:18:08 03/13/2014 
-- Design Name: 
-- Module Name:    ClockDivisorN - Behavioral 
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

entity ClockDivisorN is
	 Generic (DIVIDE : INTEGER := 4);
    Port ( clk_i : in  STD_LOGIC;
           clk_div_o : out  STD_LOGIC);
end ClockDivisorN;

architecture Behavioral of ClockDivisorN is
	
begin

	process(clk_i)
		variable count : integer range 0 to DIVIDE-1 := 0;
	begin
	if clk_i'event and clk_i = '1' then
		if count = DIVIDE-1 then
	       count := 0;
			 clk_div_o <= '1';
	   else
			 clk_div_o <= '0';
	       count := count + 1;
	   end if;
	end if;
	end process;


end Behavioral;

