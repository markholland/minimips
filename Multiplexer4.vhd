library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Multiplexer4 is
	 GENERIC(WIDTH : integer := 4);
    Port ( a_i : in  STD_LOGIC_VECTOR(WIDTH-1 downto 0);                             -- data in
           b_i : in  STD_LOGIC_VECTOR(WIDTH-1 downto 0);                             -- data in
           c_i : in  STD_LOGIC_VECTOR(WIDTH-1 downto 0);                             -- data in
           d_i : in  STD_LOGIC_VECTOR(WIDTH-1 downto 0);                             -- data in
           mux_sel_i : in  STD_LOGIC_VECTOR (1 downto 0);   -- control
           y_o : out  STD_LOGIC_VECTOR(WIDTH-1 downto 0));                           -- data out
end Multiplexer4;

architecture Structural of Multiplexer4 is

   
begin

   process(a_i, b_i, c_i, d_i, mux_sel_i)
	begin
	case mux_sel_i is
		when "00" =>
			y_o <= a_i;
		when "01" =>
			y_o <= b_i;
		when "10" =>
			y_o <= c_i;
		when "11" =>
			y_o <= d_i;
		when others =>
			y_o <= (others=>'Z');
	end case;
	
	end process;

end Structural;

