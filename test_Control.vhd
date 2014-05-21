--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:24:40 05/14/2014
-- Design Name:   
-- Module Name:   Z:/Dropbox/UNI 13-14/2nd Semester/Dsd/Xilinx Projects/Lab5/test_Control.vhd
-- Project Name:  Lab5
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Control
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
 
ENTITY test_Control IS
END test_Control;
 
ARCHITECTURE behavior OF test_Control IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Control
    PORT(
         clk_i : IN  std_logic;
         reset : IN  std_logic;
         en : IN  std_logic;
         Op : IN  std_logic_vector(5 downto 0);
         PCWriteCond : OUT  std_logic;
         PCWrite : OUT  std_logic;
         IorD : OUT  std_logic;
         MemRead : OUT  std_logic;
         MemWrite : OUT  std_logic;
         MemToReg : OUT  std_logic;
         IRWrite : OUT  std_logic_vector(3 downto 0);
         PCSource : OUT  std_logic_vector(1 downto 0);
         ALUOp : OUT  std_logic_vector(1 downto 0);
         ALUSrcB : OUT  std_logic_vector(1 downto 0);
         ALUSrcA : OUT  std_logic;
         RegWrite : OUT  std_logic;
         RegDest : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk_i : std_logic := '0';
   signal reset : std_logic := '0';
   signal en : std_logic := '0';
   signal Op : std_logic_vector(5 downto 0) := (others => '0');

 	--Outputs
   signal PCWriteCond : std_logic;
   signal PCWrite : std_logic;
   signal IorD : std_logic;
   signal MemRead : std_logic;
   signal MemWrite : std_logic;
   signal MemToReg : std_logic;
   signal IRWrite : std_logic_vector(3 downto 0);
   signal PCSource : std_logic_vector(1 downto 0);
   signal ALUOp : std_logic_vector(1 downto 0);
   signal ALUSrcB : std_logic_vector(1 downto 0);
   signal ALUSrcA : std_logic;
   signal RegWrite : std_logic;
   signal RegDest : std_logic;

   -- Clock period definitions
   constant clk_i_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Control PORT MAP (
          clk_i => clk_i,
          reset => reset,
          en => en,
          Op => Op,
          PCWriteCond => PCWriteCond,
          PCWrite => PCWrite,
          IorD => IorD,
          MemRead => MemRead,
          MemWrite => MemWrite,
          MemToReg => MemToReg,
          IRWrite => IRWrite,
          PCSource => PCSource,
          ALUOp => ALUOp,
          ALUSrcB => ALUSrcB,
          ALUSrcA => ALUSrcA,
          RegWrite => RegWrite,
          RegDest => RegDest
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
		en <= '1';
		Op <= "000010";
		
		wait for clk_i_period*10;
		
      wait for clk_i_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
