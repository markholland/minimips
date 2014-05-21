----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:27:18 05/15/2014 
-- Design Name: 
-- Module Name:    Instr_Register - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Instr_Register is
    Port ( clk_i : in  STD_LOGIC;
           reset : in  STD_LOGIC;
			  IRWrite : in STD_LOGIC_VECTOR (3 downto 0);
			  instr_in : in  STD_LOGIC_VECTOR (7 downto 0);
           instr_o1 : out  STD_LOGIC_VECTOR (15 downto 0);
           instr_o2 : out  STD_LOGIC_VECTOR (4 downto 0);
           instr_o3 : out  STD_LOGIC_VECTOR (4 downto 0);
           instr_o4 : out  STD_LOGIC_VECTOR (5 downto 0));
end Instr_Register;

architecture Behavioral of Instr_Register is

	signal input0 : std_logic_vector(7 downto 0):= (others=>'0');
	signal input1 : std_logic_vector(7 downto 0):= (others=>'0');
	signal input2 : std_logic_vector(7 downto 0):= (others=>'0');
	signal input3 : std_logic_vector(7 downto 0):= (others=>'0');
	signal aux1 : std_logic_vector(15 downto 0):= (others=>'0');
	signal aux2 : std_logic_vector(4 downto 0):= (others=>'0');
	signal aux3 : std_logic_vector(4 downto 0):= (others=>'0');
	signal aux4 : std_logic_vector(5 downto 0):= (others=>'0');
	

begin

	process(reset, clk_i)
	begin
	if(reset='1') then
		aux1 <= (others=>'0');
		aux2 <= (others=>'0');
		aux3 <= (others=>'0');
		aux4 <= (others=>'0');
	elsif(clk_i'event and clk_i='1') then
		case IRWrite is
			when "1000" =>
				input0 <= instr_in;
			when "0100" =>
				input1 <= instr_in;
			when "0010" =>
				input2 <= instr_in;
			when "0001" =>
				--input3 <= instr_in;
				aux1 <=  input2&instr_in;
				aux2 <=  input1(4 downto 0);
				aux3 <=  input0(1 downto 0)&input1(7 downto 5);
				aux4 <=  input0(7 downto 2);
			when others =>
				
		end case;
		
	end if;
	
	end process;

	instr_o1 <= aux1;
	instr_o2 <= aux2;
	instr_o3 <= aux3;
	instr_o4 <= aux4;

end Behavioral;

