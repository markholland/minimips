----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:34:03 05/15/2014 
-- Design Name: 
-- Module Name:    MemDataReg - Behavioral 
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

entity MemDataReg is
    Port ( clk_i : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           data_in : in  STD_LOGIC_VECTOR(7 downto 0);
           data_out : out  STD_LOGIC_VECTOR(7 downto 0));
end MemDataReg;

architecture Behavioral of MemDataReg is

	signal aux: std_logic_vector(7 downto 0);

begin

	process(reset, clk_i)
	begin
	if(reset='1') then
		aux<=(others=>'0');
	elsif(clk_i'event and clk_i='1') then
		aux<=data_in;
	end if;
	
	end process;

	data_out<=aux;

end Behavioral;

