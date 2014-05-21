library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity DisplaysManager is
    Port ( rst_i : in  STD_LOGIC;                        -- reset
           clk_i : in  STD_LOGIC;                        -- clock
           en_i : in  STD_LOGIC;                         -- enable
           a_i : in  STD_LOGIC_VECTOR (3 downto 0);      -- first data
           b_i : in  STD_LOGIC_VECTOR (3 downto 0);      -- second data
           c_i : in  STD_LOGIC_VECTOR (3 downto 0);      -- third data
           d_i : in  STD_LOGIC_VECTOR (3 downto 0);      -- fourth data
           en_n_o : out  STD_LOGIC_VECTOR (3 downto 0);  -- display enabled
           hex_o : out  STD_LOGIC_VECTOR (3 downto 0));  -- data to be shown on the display enabled
end DisplaysManager;

architecture Behavioral of DisplaysManager is

   type visibleDisplay is (display0, display1, display2, display3);  -- four possible displays to activate
   signal currentDisplay : visibleDisplay := display0;               -- display currently visible
   
begin
   
   transition : process(rst_i, clk_i)                          -- process that takes control of the transitions
   begin
      if rst_i = '1' then                                      -- initialise the currently visible display on reset
         currentDisplay <= display0;
      elsif clk_i'event and clk_i = '1' then                   -- when receiving a clock edge
         if en_i = '1' then                                       -- when the manager is enabled
            case currentDisplay is                                   -- select the next display to be activated
               when display0 => currentDisplay <= display1;          
               when display1 => currentDisplay <= display2;
               when display2 => currentDisplay <= display3;
               when others   => currentDisplay <= display0;
            end case;
         end if;
      end if;
   end process;
   
   output : process(currentDisplay)       -- process that computes the outputs
   begin
      case currentDisplay is              -- when a new display is visible
         when display1 =>                    -- show the second data on the second display
            en_n_o <= "1101";
            hex_o <= b_i;
         when display2 =>                    -- show the third data on the third display
            en_n_o <= "1011";
            hex_o <= c_i;
         when display3 =>                    -- show the fourth data on the fourth display
            en_n_o <= "0111";
            hex_o <= d_i;
         when others =>                      -- show the first data on the first display
            en_n_o <= "1110";
            hex_o <= a_i;
      end case;
   end process;

end Behavioral;

