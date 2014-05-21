----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:14:05 05/15/2014 
-- Design Name: 
-- Module Name:    PC - Behavioral 
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

entity PC is
    Port ( clk_i : in  STD_LOGIC;
			  en : in STD_LOGIC;
			  reset : in STD_LOGIC;
           PCEn : in  STD_LOGIC;
           pc_in : in  STD_LOGIC_VECTOR (7 downto 0);
           pc_out : out  STD_LOGIC_VECTOR (7 downto 0));
end PC;

architecture Behavioral of PC is

	signal actual : std_logic_vector(7 downto 0) := (others=>'0');
	
begin

	process(reset, clk_i)
		
	begin
		if (reset = '1') then
			actual <= (others=>'0');
		elsif(clk_i'event and clk_i='1') then
			if(en = '1') then
				if(PCEn = '1') then
					actual <= pc_in;
				end if;
			end if;
		end if;	
	end process;
	
	pc_out<=actual;

end Behavioral;

