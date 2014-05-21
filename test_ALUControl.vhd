--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:42:03 05/14/2014
-- Design Name:   
-- Module Name:   Z:/Dropbox/UNI 13-14/2nd Semester/Dsd/Xilinx Projects/Lab5/test_ALUControl.vhd
-- Project Name:  Lab5
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ALUControl
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
 
ENTITY test_ALUControl IS
END test_ALUControl;
 
ARCHITECTURE behavior OF test_ALUControl IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ALUControl
    PORT(
         aluop : IN  std_logic_vector(1 downto 0);
         funct : IN  std_logic_vector(5 downto 0);
         alucontrol : OUT  std_logic_vector(2 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal aluop : std_logic_vector(1 downto 0) := (others => '0');
   signal funct : std_logic_vector(5 downto 0) := (others => '0');

 	--Outputs
   signal alu_control : std_logic_vector(2 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
--   constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ALUControl PORT MAP (
          aluop => aluop,
          funct => funct,
          alucontrol => alu_control
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
		aluop <= "00";
		wait for 100 ns;	
		aluop <= "01";
		wait for 100 ns;	
		aluop <= "10";
		funct <= "000000";
		wait for 100 ns;	
		aluop <= "10";
		funct <= "100000";
		wait for 100 ns;	
		aluop <= "10";
		funct <= "100010";
		wait for 100 ns;	
		aluop <= "10";
		funct <= "100100";
		wait for 100 ns;	
		aluop <= "10";
		funct <= "100101";
		wait for 100 ns;	
		aluop <= "10";
		funct <= "101010";
		wait for 100 ns;	
		aluop <= "11";
		wait for 100 ns;	
		
		wait for 100 ns;	

--      wait for <clock>_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
