library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ShiftRegister2 is
    Port ( clk_i : in  STD_LOGIC;
			  reset : in  STD_LOGIC;
           bit_i : in  STD_LOGIC_VECTOR(5 downto 0);
           bit_o : out  STD_LOGIC_VECTOR(7 downto 0));
end ShiftRegister2;

architecture Comportamental of ShiftRegister2 is

   
   
begin
	
	process(reset, clk_i)
	begin
	if(reset='1') then
		bit_o <= "00000000";
	elsif(clk_i'event and clk_i='1') then
		bit_o <= bit_i&"00";
	end if;
	
	end process;

end Comportamental;

