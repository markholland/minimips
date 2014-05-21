library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ClockDivider is
    Generic (DIVIDE : integer := 100000000);
    Port ( rst_i : in  STD_LOGIC;            -- reset
           clk_i : in  STD_LOGIC;            -- clock
           clk_div_o : out  STD_LOGIC);      -- divided clock
end ClockDivider;

architecture Behavioral of ClockDivider is

   signal count : integer range 0 to DIVIDE-1;  -- stores the number of received clock cycles
   
begin

   process(rst_i, clk_i)
   begin
      if rst_i = '1' then                       -- initialise count and divided clock on reset
         count <= 0;
         clk_div_o <= '0';
      elsif clk_i'event and clk_i = '1' then    -- when receiving a new clock edge
         if count = DIVIDE-1 then                  -- if the maximum count is reached
            clk_div_o <= '1';                         -- activate the divided clock
            count <= 0;                               -- reset the count
         else                                      -- otherwise, increase count and initialise divided clock
            clk_div_o <= '0';
            count <= count + 1;
         end if;
      end if;
   end process; 
   
end Behavioral;

