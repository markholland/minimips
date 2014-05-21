--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:04:35 05/18/2014
-- Design Name:   
-- Module Name:   Z:/Dropbox/UNI 13-14/2nd Semester/Dsd/Xilinx Projects/Lab5/test_ALU.vhd
-- Project Name:  Lab5
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ALU
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
 
ENTITY test_ALU IS
END test_ALU;
 
ARCHITECTURE behavior OF test_ALU IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ALU
    PORT(
         ALUSrcA : IN  std_logic_vector(7 downto 0);
         ALUSrcB : IN  std_logic_vector(7 downto 0);
         alucontrol : IN  std_logic_vector(2 downto 0);
         Zero : OUT  std_logic;
         ALUResult : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal ALUSrcA : std_logic_vector(7 downto 0) := (others => '0');
   signal ALUSrcB : std_logic_vector(7 downto 0) := (others => '0');
   signal alucontrol : std_logic_vector(2 downto 0) := (others => '0');

 	--Outputs
   signal Zero : std_logic;
   signal ALUResult : std_logic_vector(7 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
--   constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ALU PORT MAP (
          ALUSrcA => ALUSrcA,
          ALUSrcB => ALUSrcB,
          alucontrol => alucontrol,
          Zero => Zero,
          ALUResult => ALUResult
        );

   -- Clock process definitions
--   <clock>_process :process
--   begin
--		<clock> <= '0';
--		wait for <clock>_period/2;
--		<clock> <= '1';
--		wait for <clock>_period/2;
--   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		ALUSrcA <= "10000000";
		ALUSrcB <= "00000001";
		
		alucontrol <= "000";
		wait for 100 ns;	
		alucontrol <= "001";
		wait for 100 ns;	
		alucontrol <= "010";
		wait for 100 ns;	
		alucontrol <= "011";
		wait for 100 ns;	
		alucontrol <= "100";
		wait for 100 ns;	
		alucontrol <= "101";
		wait for 100 ns;
		ALUSrcA <= "00000000";
		ALUSrcB <= "00000000";		
		alucontrol <= "110";
		wait for 100 ns;	
		alucontrol <= "111";
		wait for 100 ns;	

		 
--      wait for <clock>_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
