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
 
ENTITY test_Registers IS
END test_Registers;
 
ARCHITECTURE behavior OF test_Registers IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Registers
    PORT(
         clk_i : IN  std_logic;
         reset : IN  std_logic;
         RegWrite : IN  std_logic;
         ReadRegister1 : IN  std_logic_vector(4 downto 0);
         ReadRegister2 : IN  std_logic_vector(4 downto 0);
         WriteRegister : IN  std_logic_vector(4 downto 0);
         WriteData : IN  std_logic_vector(7 downto 0);
         ReadData1 : OUT  std_logic_vector(7 downto 0);
         ReadData2 : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk_i : std_logic := '0';
   signal reset : std_logic := '0';
   signal RegWrite : std_logic := '0';
   signal ReadRegister1 : std_logic_vector(4 downto 0) := (others => '0');
   signal ReadRegister2 : std_logic_vector(4 downto 0) := (others => '0');
   signal WriteRegister : std_logic_vector(4 downto 0) := (others => '0');
   signal WriteData : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal ReadData1 : std_logic_vector(7 downto 0);
   signal ReadData2 : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_i_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Registers PORT MAP (
          clk_i => clk_i,
          reset => reset,
          RegWrite => RegWrite,
          ReadRegister1 => ReadRegister1,
          ReadRegister2 => ReadRegister2,
          WriteRegister => WriteRegister,
          WriteData => WriteData,
          ReadData1 => ReadData1,
          ReadData2 => ReadData2
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
		RegWrite <= '1';
		WriteRegister <= "00001";
		WriteData <= "11111111";
		wait for clk_i_period*1;
		RegWrite <= '0';
		ReadRegister1 <= "00001";
      wait for clk_i_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
