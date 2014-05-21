--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:26:31 05/18/2014
-- Design Name:   
-- Module Name:   Z:/Dropbox/UNI 13-14/2nd Semester/Dsd/Xilinx Projects/Lab5/test_Instr_Register.vhd
-- Project Name:  Lab5
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Instr_Register
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
 
ENTITY test_Instr_Register IS
END test_Instr_Register;
 
ARCHITECTURE behavior OF test_Instr_Register IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Instr_Register
    PORT(
         clk_i : IN  std_logic;
         reset : IN  std_logic;
         IRWrite : IN  std_logic_vector(3 downto 0);
         instr_in : IN  std_logic_vector(7 downto 0);
         instr_o1 : OUT  std_logic_vector(15 downto 0);
         instr_o2 : OUT  std_logic_vector(5 downto 0);
         instr_o3 : OUT  std_logic_vector(5 downto 0);
         instr_o4 : OUT  std_logic_vector(6 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk_i : std_logic := '0';
   signal reset : std_logic := '0';
   signal IRWrite : std_logic_vector(3 downto 0) := (others => '0');
   signal instr_in : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal instr_o1 : std_logic_vector(15 downto 0);
   signal instr_o2 : std_logic_vector(5 downto 0);
   signal instr_o3 : std_logic_vector(5 downto 0);
   signal instr_o4 : std_logic_vector(6 downto 0);

   -- Clock period definitions
   constant clk_i_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Instr_Register PORT MAP (
          clk_i => clk_i,
          reset => reset,
          IRWrite => IRWrite,
          instr_in => instr_in,
          instr_o1 => instr_o1,
          instr_o2 => instr_o2,
          instr_o3 => instr_o3,
          instr_o4 => instr_o4
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
		instr_in <= (others => '1');
		IRWrite <= "1000";
		wait for clk_i_period*1;
		instr_in <= (others => '0');
		IRWrite <= "0100";
		wait for clk_i_period*1;
		instr_in <= (others => '1');
		IRWrite <= "0010";
		wait for clk_i_period*1;
		instr_in <= (others => '0');
		IRWrite <= "0001";
		wait for clk_i_period*1;
		
      wait for clk_i_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
