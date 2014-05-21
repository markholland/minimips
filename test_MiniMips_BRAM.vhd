--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:37:26 05/20/2014
-- Design Name:   
-- Module Name:   Z:/Dropbox/UNI 13-14/2nd Semester/Dsd/Xilinx Projects/Lab5/test_MiniMips_BRAM.vhd
-- Project Name:  Lab5
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: MiniMips_BRAM
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test_MiniMips_BRAM IS
END test_MiniMips_BRAM;
 
ARCHITECTURE behavior OF test_MiniMips_BRAM IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT MiniMips_BRAM
    PORT(
         clk_global : IN  std_logic;
         reset_global : IN  std_logic;
         en_n_o : OUT  std_logic_vector(3 downto 0);
         display_n_o : OUT  std_logic_vector(6 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk_global : std_logic := '0';
   signal reset_global : std_logic := '0';

 	--Outputs
   signal en_n_o : std_logic_vector(3 downto 0);
   signal display_n_o : std_logic_vector(6 downto 0);

   -- Clock period definitions
   constant clk_global_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: MiniMips_BRAM PORT MAP (
          clk_global => clk_global,
          reset_global => reset_global,
          en_n_o => en_n_o,
          display_n_o => display_n_o
        );

   -- Clock process definitions
   clk_global_process :process
   begin
		clk_global <= '0';
		wait for clk_global_period/2;
		clk_global <= '1';
		wait for clk_global_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      reset_global <= '1';
		wait for clk_global_period*1;
		reset_global <= '0';
      wait for 2000ns;

      -- insert stimulus here 

      wait;
   end process;

END;