--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:15:51 05/18/2014
-- Design Name:   
-- Module Name:   Z:/Dropbox/UNI 13-14/2nd Semester/Dsd/Xilinx Projects/Lab5/test_ShiftRegister2.vhd
-- Project Name:  Lab5
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ShiftRegister2
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
 
ENTITY test_ShiftRegister2 IS
END test_ShiftRegister2;
 
ARCHITECTURE behavior OF test_ShiftRegister2 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ShiftRegister2
    PORT(
         clk_i : IN  std_logic;
         reset : IN  std_logic;
         bit_i : IN  std_logic_vector(5 downto 0);
         bit_o : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk_i : std_logic := '0';
   signal reset : std_logic := '0';
   signal bit_i : std_logic_vector(5 downto 0) := (others => '0');

 	--Outputs
   signal bit_o : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_i_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ShiftRegister2 PORT MAP (
          clk_i => clk_i,
          reset => reset,
          bit_i => bit_i,
          bit_o => bit_o
        );

   -- Clock process definitions
   clk_i_process :process
   begin
		clk_i <= '0';
		wait for clk_i_period/2;
		clk_i <= '1';
		wait for clk_i_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		bit_i <= "111111";
      wait for clk_i_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
