library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Multiplexer2 is
	 GENERIC(WIDTH : integer := 4);
    Port ( a_i : in  STD_LOGIC_VECTOR(WIDTH-1 downto 0);           -- data in
           b_i : in  STD_LOGIC_VECTOR(WIDTH-1 downto 0);           -- data in
           mux_sel_i : in  STD_LOGIC;     -- control
           c_o : out  STD_LOGIC_VECTOR(WIDTH-1 downto 0));         -- data out
end Multiplexer2;

architecture BehavioralV1 of Multiplexer2 is

begin

	process (a_i, b_i, mux_sel_i)
	begin
   case mux_sel_i is
		when '0' =>
			c_o <= a_i;
		when '1' =>
			c_o <= b_i;
		when others =>
			c_o <= (others => 'Z');  
  end case;
  end process;

end BehavioralV1;


