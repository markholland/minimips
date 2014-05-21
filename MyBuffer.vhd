----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:20:24 05/15/2014 
-- Design Name: 
-- Module Name:    Buffer - Behavioral 
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

entity MyBuffer is
    Port ( clk_i : in  STD_LOGIC;
			  en : in STD_LOGIC;
           reset : in  STD_LOGIC;
           buf_in : in  STD_LOGIC_VECTOR (7 downto 0);
           buf_out : out  STD_LOGIC_VECTOR (7 downto 0));
end MyBuffer;

architecture Behavioral of MyBuffer is

	signal aux : std_logic_vector(7 downto 0);

begin

	process(reset, clk_i)
	begin
	if(reset='1') then
		aux <= (others=>'0');
	elsif(clk_i'event and clk_i='1') then
		if(en = '1') then
			aux <= buf_in;
		end if;
	end if;
	end process;
	
	buf_out <= aux;


end Behavioral;

