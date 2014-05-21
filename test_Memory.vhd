--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:34:25 05/20/2014
-- Design Name:   
-- Module Name:   Z:/Dropbox/UNI 13-14/2nd Semester/Dsd/Xilinx Projects/Lab5/test_Memory.vhd
-- Project Name:  Lab5
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Memory
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
 
ENTITY test_Memory IS
END test_Memory;
 
ARCHITECTURE behavior OF test_Memory IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Memory
    PORT(
         clk_i : IN  std_logic;
         address : IN  std_logic_vector(7 downto 0);
         WriteData : IN  std_logic_vector(7 downto 0);
         MemData : OUT  std_logic_vector(7 downto 0);
         MemRead : IN  std_logic;
         MemWrite : IN  std_logic;
         port0 : OUT  std_logic_vector(7 downto 0);
         port1 : OUT  std_logic_vector(7 downto 0);
         port2 : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk_i : std_logic := '0';
   signal address : std_logic_vector(7 downto 0) := (others => '0');
   signal WriteData : std_logic_vector(7 downto 0) := (others => '0');
   signal MemRead : std_logic := '0';
   signal MemWrite : std_logic := '0';

 	--Outputs
   signal MemData : std_logic_vector(7 downto 0);
   signal port0 : std_logic_vector(7 downto 0);
   signal port1 : std_logic_vector(7 downto 0);
   signal port2 : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_i_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Memory PORT MAP (
          clk_i => clk_i,
          address => address,
          WriteData => WriteData,
          MemData => MemData,
          MemRead => MemRead,
          MemWrite => MemWrite,
          port0 => port0,
          port1 => port1,
          port2 => port2
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
		MemRead <= '1';
		address <= "00000000";
      wait for clk_i_period*1;
		address <= "00000001";
		wait for clk_i_period*1;
		address <= "11111111";
		wait for clk_i_period*1;
		MemRead <= '0';
		MemWrite <= '1';
		wait for clk_i_period*1;
		WriteData <= "00001000";
		wait for clk_i_period*1;
		
		wait for clk_i_period*1;
      -- insert stimulus here 

      wait;
   end process;

END;
