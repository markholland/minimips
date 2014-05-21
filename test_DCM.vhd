--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:29:01 05/20/2014
-- Design Name:   
-- Module Name:   Z:/Dropbox/UNI 13-14/2nd Semester/Dsd/Xilinx Projects/Lab5/test_DCM.vhd
-- Project Name:  Lab5
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: DCM
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
 
ENTITY test_DCM IS
END test_DCM;
 
ARCHITECTURE behavior OF test_DCM IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT DCM
    PORT(
         CLK_IN1 : IN  std_logic;
         CLK_OUT1 : OUT  std_logic;
         RESET : IN  std_logic;
         LOCKED : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal CLK_IN1 : std_logic := '0';
   signal RESET : std_logic := '0';

 	--Outputs
   signal CLK_OUT1 : std_logic;
   signal LOCKED : std_logic;

   -- Clock period definitions
   constant CLK_IN1_period : time := 10 ns;
   constant CLK_OUT1_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: DCM PORT MAP (
          CLK_IN1 => CLK_IN1,
          CLK_OUT1 => CLK_OUT1,
          RESET => RESET,
          LOCKED => LOCKED
        );

   -- Clock process definitions
   CLK_IN1_process :process
   begin
		CLK_IN1 <= '0';
		wait for CLK_IN1_period/2;
		CLK_IN1 <= '1';
		wait for CLK_IN1_period/2;
   end process;
 
   CLK_OUT1_process :process
   begin
		CLK_OUT1 <= '0';
		wait for CLK_OUT1_period/2;
		CLK_OUT1 <= '1';
		wait for CLK_OUT1_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for CLK_IN1_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
