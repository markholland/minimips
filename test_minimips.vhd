--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:19:09 05/18/2014
-- Design Name:   
-- Module Name:   Z:/Dropbox/UNI 13-14/2nd Semester/Dsd/Xilinx Projects/Lab5/test_Registers.vhd
-- Project Name:  Lab5
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Registers
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
 
ENTITY test_MiniMips IS
END test_MiniMips;
 
ARCHITECTURE behavior OF test_MiniMips IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT MiniMips
    PORT(
         clk_global : in  STD_LOGIC;
           reset_global : in  STD_LOGIC;
           en_n_o : out  STD_LOGIC_VECTOR (3 downto 0);
           display_n_o : out  STD_LOGIC_VECTOR (6 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk_i : std_logic := '0';
   signal reset : std_logic := '0';
   signal en_n_o : std_logic_vector(3 downto 0) := (others => '0');
   signal display_n_o : std_logic_vector(6 downto 0) := (others => '0');
   
 	--Outputs
   
   -- Clock period definitions
   constant clk_i_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: MiniMips PORT MAP (
          clk_global => clk_i,
          reset_global => reset,
          en_n_o => en_n_o ,
          display_n_o => display_n_o
          
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
      reset <= '1';
		wait for clk_i_period*1;
		reset <= '0';
      wait for 2000ns;
      -- insert stimulus here 

      wait;
   end process;

END;
