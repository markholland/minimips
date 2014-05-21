--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:02:14 05/20/2014
-- Design Name:   
-- Module Name:   Z:/Dropbox/UNI 13-14/2nd Semester/Dsd/Xilinx Projects/Lab5/test_ClockDivider.vhd
-- Project Name:  Lab5
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ClockDivider
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
 
ENTITY test_ClockDivider IS
END test_ClockDivider;
 
ARCHITECTURE behavior OF test_ClockDivider IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ClockDivider
	 Generic (DIVIDE : integer := 100000000);
    PORT(
         rst_i : IN  std_logic;
         clk_i : IN  std_logic;
         clk_div_o : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal rst_i : std_logic := '0';
   signal clk_i : std_logic := '0';

 	--Outputs
   signal clk_div_o : std_logic;

   -- Clock period definitions
   constant clk_i_period : time := 10 ns;
   constant clk_div_o_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ClockDivider 
	generic map (DIVIDE => 2)
	PORT MAP (
          rst_i => rst_i,
          clk_i => clk_i,
          clk_div_o => clk_div_o
        );

   -- Clock process definitions
   clk_i_process :process
   begin
		clk_i <= '0';
		wait for clk_i_period/2;
		clk_i <= '1';
		wait for clk_i_period/2;
   end process;
 
   clk_div_o_process :process
   begin
		clk_div_o <= '0';
		wait for clk_div_o_period/2;
		clk_div_o <= '1';
		wait for clk_div_o_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_i_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
