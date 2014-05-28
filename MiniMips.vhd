----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:24:29 05/15/2014 
-- Design Name: 
-- Module Name:    MiniMips - Behavioral 
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

entity MiniMips is
    Port ( 
			  clk_global : in  STD_LOGIC;
           reset_global : in  STD_LOGIC;
           en_n_o : out  STD_LOGIC_VECTOR (3 downto 0);
           display_n_o : out  STD_LOGIC_VECTOR (6 downto 0)
			 );
end MiniMips;

architecture Structural of MiniMips is

	component DCM
	port
		(-- Clock in ports
		CLK_IN1           : in     std_logic;
		-- Clock out ports
		CLK_OUT1          : out    std_logic;
		-- Status and control signals
		RESET             : in     std_logic;
		LOCKED            : out    std_logic
		);
	end component;

	
	component PC is
    Port ( clk_i : in  STD_LOGIC;
			  en : in STD_LOGIC;
			  reset : in STD_LOGIC;
           PCEn : in  STD_LOGIC;
           pc_in : in  STD_LOGIC_VECTOR (7 downto 0);
           pc_out : out  STD_LOGIC_VECTOR (7 downto 0));
	end component;
	
	component Memory is
	 Port ( clk_i : in  STD_LOGIC;
			  en : in STD_LOGIC;
           address : in  STD_LOGIC_VECTOR(7 downto 0);
           WriteData : in  STD_LOGIC_VECTOR(7  DOWNTO 0);
           MemData : out  STD_LOGIC_VECTOR(7  DOWNTO 0);
           MemRead : in  STD_LOGIC;
           MemWrite : in  STD_LOGIC;
			  port0 : out STD_LOGIC_VECTOR(7 downto 0);
			  port1 : out STD_LOGIC_VECTOR(7 downto 0);
			  port2 : out STD_LOGIC_VECTOR(7 downto 0)
			  );
	end component;
	
	component Instr_Register is
    Port ( clk_i : in  STD_LOGIC;
	        en : in STD_LOGIC;
           reset : in  STD_LOGIC;
			  IRWrite : in STD_LOGIC_VECTOR (3 downto 0);
			  instr_in : in  STD_LOGIC_VECTOR (7 downto 0);
           instr_o1 : out  STD_LOGIC_VECTOR (15 downto 0);
           instr_o2 : out  STD_LOGIC_VECTOR (4 downto 0);
           instr_o3 : out  STD_LOGIC_VECTOR (4 downto 0);
           instr_o4 : out  STD_LOGIC_VECTOR (5 downto 0));
	end component;
	
	component MemDataReg is
    Port ( clk_i : in  STD_LOGIC;
			  en : in STD_LOGIC;
           reset : in  STD_LOGIC;
           data_in : in  STD_LOGIC_VECTOR(7 downto 0);
           data_out : out  STD_LOGIC_VECTOR(7 downto 0));
	end component;
	
	component Control is
    Port ( clk_i : in STD_LOGIC;
			  reset : in STD_LOGIC;
			  en : in STD_LOGIC;
			  Op : in  STD_LOGIC_VECTOR (5 downto 0);
           PCWriteCond : out  STD_LOGIC;
           PCWrite : out  STD_LOGIC;
           IorD : out  STD_LOGIC;
           MemRead : out  STD_LOGIC;
           MemWrite : out  STD_LOGIC;
           MemToReg : out  STD_LOGIC;
           IRWrite : out  STD_LOGIC_VECTOR (3 downto 0);
           PCSource : out  STD_LOGIC_VECTOR (1 downto 0);
           ALUOp : out  STD_LOGIC_VECTOR (1 downto 0);
           ALUSrcB : out  STD_LOGIC_VECTOR (1 downto 0);
			  ALUSrcA : out  STD_LOGIC;
			  RegWrite : out  STD_LOGIC;
			  RegDest : out  STD_LOGIC);
	end component;
	
	component Registers is
    Port ( clk_i : in  STD_LOGIC;
			  en : in STD_LOGIC;
           reset : in  STD_LOGIC;
           RegWrite : in  STD_LOGIC;
           ReadRegister1 : in  STD_LOGIC_VECTOR (4 downto 0);
           ReadRegister2 : in  STD_LOGIC_VECTOR (4 downto 0);
           WriteRegister : in  STD_LOGIC_VECTOR (4 downto 0);
           WriteData : in  STD_LOGIC_VECTOR (7 downto 0);
           ReadData1 : out  STD_LOGIC_VECTOR (7 downto 0);
           ReadData2 : out  STD_LOGIC_VECTOR (7 downto 0));
	end component;
	
	component ALUControl is
    Port ( aluop : in  STD_LOGIC_VECTOR (1 downto 0);
           funct : in  STD_LOGIC_VECTOR (5 downto 0);
           alucontrol : out  STD_LOGIC_VECTOR (2 downto 0));
	end component;
	
	component ALU is
    Port ( ALUSrcA : in  STD_LOGIC_VECTOR (7 downto 0);
           ALUSrcB : in  STD_LOGIC_VECTOR (7 downto 0);
           alucontrol : in  STD_LOGIC_VECTOR (2 downto 0);
           Zero : out  STD_LOGIC;
           ALUResult : out  STD_LOGIC_VECTOR (7 downto 0));
	end component;
	
	component ShiftRegister2 is
    Port ( clk_i : in  STD_LOGIC;
			  en : in STD_LOGIC;
			  reset : in  STD_LOGIC;
           bit_i : in  STD_LOGIC_VECTOR(5 downto 0);
           bit_o : out  STD_LOGIC_VECTOR(7 downto 0));
	end component;
	
	component MyBuffer is
    Port ( clk_i : in  STD_LOGIC;
			  en : in STD_LOGIC;
           reset : in  STD_LOGIC;
           buf_in : in  STD_LOGIC_VECTOR (7 downto 0);
           buf_out : out  STD_LOGIC_VECTOR (7 downto 0));
	end component;
	
	component Multiplexer2 is
	 GENERIC(WIDTH : integer := 4);
    Port ( a_i : in  STD_LOGIC_VECTOR(WIDTH-1 downto 0);           -- data in
           b_i : in  STD_LOGIC_VECTOR(WIDTH-1 downto 0);           -- data in
           mux_sel_i : in  STD_LOGIC;     -- control
           c_o : out  STD_LOGIC_VECTOR(WIDTH-1 downto 0));         -- data out
	end component;
	
	component Multiplexer4 is
	 GENERIC(WIDTH : integer := 4);
    Port ( a_i : in  STD_LOGIC_VECTOR(WIDTH-1 downto 0);                             -- data in
           b_i : in  STD_LOGIC_VECTOR(WIDTH-1 downto 0);                             -- data in
           c_i : in  STD_LOGIC_VECTOR(WIDTH-1 downto 0);                             -- data in
           d_i : in  STD_LOGIC_VECTOR(WIDTH-1 downto 0);                             -- data in
           mux_sel_i : in  STD_LOGIC_VECTOR (1 downto 0);   -- control
           y_o : out  STD_LOGIC_VECTOR(WIDTH-1 downto 0));                           -- data out
	end component;

	component ClockDivisorN is
    Generic (DIVIDE : integer := 100000000);
    Port ( clk_i : in  STD_LOGIC;            -- clock
           clk_div_o : out  STD_LOGIC);      -- divided clock
	end component;
	
	component DisplaysManager is
    Port ( rst_i : in  STD_LOGIC;                        -- reset
           clk_i : in  STD_LOGIC;                        -- clock
           en_i : in  STD_LOGIC;                         -- enable
           a_i : in  STD_LOGIC_VECTOR (3 downto 0);      -- first data
           b_i : in  STD_LOGIC_VECTOR (3 downto 0);      -- second data
           c_i : in  STD_LOGIC_VECTOR (3 downto 0);      -- third data
           d_i : in  STD_LOGIC_VECTOR (3 downto 0);      -- fourth data
           en_n_o : out  STD_LOGIC_VECTOR (3 downto 0);  -- display enabled
           hex_o : out  STD_LOGIC_VECTOR (3 downto 0));  -- data to be shown on the display enabled
	end component;
	
	component Display7Segments is
    Port ( hex_i : in  STD_LOGIC_VECTOR (3 downto 0);       -- number to be displayed
           leds_n_o : out  STD_LOGIC_VECTOR (6 downto 0));  -- activation of the proper leds
	end component;

	signal auxPCWriteCond : std_logic;
	signal auxPCWrite     : std_logic;
	signal auxIorD        : std_logic;
	signal auxMemRead     : std_logic;
	signal auxMemWrite    : std_logic;
	signal auxMemToReg    : std_logic;
	signal auxIRWrite		 : std_logic_vector(3 downto 0);
	signal auxPCSource 	 : std_logic_vector(1 downto 0);
	signal auxALUOp		 : std_logic_vector(1 downto 0);
	signal auxALUSrcB		 : std_logic_vector(1 downto 0);
	signal auxALUSrcA 	 : std_logic;
	signal auxRegWrite	 : std_logic;
	signal auxRegDest		 : std_logic;
	
	signal auxALUzero      : std_logic;
	
	
	signal auxMux1out : std_logic_vector(7 downto 0);
	signal auxMux2out : std_logic_vector(4 downto 0);
	signal auxMux3out : std_logic_vector(7 downto 0);
	signal auxMux4out : std_logic_vector(7 downto 0);
	signal auxMux5out : std_logic_vector(7 downto 0);
	signal auxMux6out : std_logic_vector(7 downto 0);
	
	signal auxPCout     : std_logic_vector(7 downto 0);
	signal auxMemData   : std_logic_vector(7 downto 0);
	signal auxInstr0out : std_logic_vector(15 downto 0);
	signal auxInstr1out : std_logic_vector(4 downto 0);
	signal auxInstr2out : std_logic_vector(4 downto 0);
	signal auxInstr3out : std_logic_vector(5 downto 0);
	
	signal auxReadData1 : std_logic_vector(7 downto 0);
	signal auxReadData2 : std_logic_vector(7 downto 0);
	
	signal auxAout 	  : std_logic_vector(7 downto 0);
	signal auxBout 	  : std_logic_vector(7 downto 0);
	
	signal auxMemDataRegout    : std_logic_vector(7 downto 0);
	signal auxALUout    : std_logic_vector(7 downto 0);
	signal auxALUcontrolout  : std_logic_vector(2 downto 0);
	signal auxALUResult  : std_logic_vector(7 downto 0);
	
	signal auxShiftLeft2 : std_logic_vector(7 downto 0);
	
	signal auxPort0 : std_logic_vector(7 downto 0);
	signal auxPort1 : std_logic_vector(7 downto 0);
	signal auxPort2 : std_logic_vector(7 downto 0);
	
	signal auxHex : std_logic_vector(3 downto 0);
	
	signal auxPCEn : std_logic;
	
	signal auxClockDivider1 : std_logic; --divide control
	signal auxClockDivider2 : std_logic; --divide display
	signal auxClockDivider_global : std_logic; --divide global clock
	
--	signal auxDCM : std_logic;

begin


	inst_pc : PC
	port map(
				clk_i => clk_global,
				en => auxClockDivider1,
			   reset => reset_global,
            PCEn => auxPCEn,
            pc_in => auxMUX6out,
            pc_out => auxPCout
	);
	
	auxPCEn <= (auxPCWrite or (auxALUzero and auxPCWriteCond));
				
	inst_mux1 : Multiplexer2
	generic map (WIDTH => 8)
	port map(
				a_i => auxPCout,
				b_i => auxALUout,
				mux_sel_i => auxIorD,
				c_o => auxMUX1out
	);
	
	inst_memory : Memory
	port map(
				clk_i => clk_global,
				en => auxClockDivider_global, --clk_global, Use auxClockDivider_global, with FPGA
				address => auxMux1out,
				WriteData => auxBout,
				MemData => auxMemData,
				MemRead => auxMemRead,
				MemWrite => auxMemWrite,
				port0 => auxPort0,
				port1 => auxPort1,
				port2 => auxPort2
	);
	
	inst_memDataReg : MemDataReg
   port map(
				clk_i => clk_global,
				en => auxClockDivider1,
            reset => reset_global,
            data_in => auxMemData,
            data_out => auxMemDataRegout
	);
	
	inst_instrReg : Instr_Register
   port map( 
			   clk_i => clk_global,
				en => auxClockDivider1,
            reset => reset_global,
			   IRWrite => auxIRWrite,
			   instr_in => auxMemData,
            instr_o1 => auxInstr0out,
            instr_o2 => auxInstr1out,
            instr_o3 => auxInstr2out,
            instr_o4 => auxInstr3out
	);
	
	inst_mux2 : Multiplexer2
	generic map (WIDTH => 5)
	port map(
				a_i => auxInstr1out,
				b_i => auxInstr0out(15 downto 11),
				mux_sel_i => auxRegDest,
				c_o => auxMux2out
	);
	
	inst_mux3 : Multiplexer2
	generic map (WIDTH => 8)
	port map(
				a_i => auxALUout,
				b_i => auxMemDataRegout,
				mux_sel_i => auxMemToReg,
				c_o => auxMux3out
	);
	
	inst_Registers : Registers
	port map( 
				clk_i => clk_global,
				en => auxClockDivider1,
            reset => reset_global,
            RegWrite => auxRegWrite,
            ReadRegister1 => auxInstr2out,
            ReadRegister2 => auxInstr1out,
            WriteRegister => auxMux2out,
            WriteData => auxMux3out,
            ReadData1 => auxReadData1,
            ReadData2 => auxReadData2
	);
	
	inst_A : MyBuffer
	port map(
				clk_i => clk_global,
				en => auxClockDivider1,
            reset => reset_global,
            buf_in => auxReadData1,
            buf_out => auxAout
	);
	
	inst_B : MyBuffer
	port map(
				clk_i => clk_global,
				en => auxClockDivider1,
            reset => reset_global,
            buf_in => auxReadData2,
            buf_out => auxBout
	);
	
	inst_mux4 : multiplexer2
	generic map (WIDTH => 8)
	port map(
				a_i => auxPCout,
				b_i => auxAout,
				mux_sel_i => auxALUSrcA,
				c_o => auxMux4out
	);
	
	inst_mux5 : multiplexer4
	generic map (WIDTH => 8)
	port map(
				a_i => auxBout,
				b_i => "00000001",
				c_i => auxInstr0out(7 downto 0),
				d_i => auxInstr0out(7 downto 0),
				mux_sel_i => auxALUSrcB,
				y_o => auxMux5out
	);
	
	instALUControl : ALUControl
	port map(
	         aluop => auxALUOp,
            funct => auxInstr0out(5 downto 0),
            alucontrol => auxALUControlout
	);
	
	inst_ALU : ALU
	port map(
				ALUSrcA => auxMux4out,
            ALUSrcB => auxMux5out,
            alucontrol => auxALUcontrolout,
            Zero => auxALUzero,
            ALUResult => auxALUResult
	);
	
	inst_ALUOut : MyBuffer
	port map(
				clk_i => clk_global,
				en => auxClockDivider1,
            reset => reset_global,
            buf_in => auxALUResult,
            buf_out => auxALUout
	);
	
	inst_ShiftLeft2 : ShiftRegister2
	port map(
				clk_i => clk_global,
				en => auxClockDivider1,
			   reset => reset_global,
            bit_i => auxInstr0out(5 downto 0),
            bit_o => auxShiftLeft2
	);
	
	inst_mux6 : multiplexer4
	generic map (WIDTH => 8)
	port map(
				a_i => auxALUResult,
				b_i => auxALUout,
				c_i => auxShiftLeft2,
				d_i => "00000000",
				mux_sel_i => auxPCSource,
				y_o => auxMux6out
	);
	
	inst_control : Control
	port map(
	         clk_i => clk_global,
			   reset => reset_global,
			   en => auxClockDivider1,
			   Op => auxInstr3out,
            PCWriteCond => auxPCWriteCond,
            PCWrite => auxPCWrite,
            IorD => auxIorD,
            MemRead => auxMemRead,
            MemWrite => auxMemWrite,
            MemToReg => auxMemToReg,
            IRWrite => auxIRWrite,
            PCSource => auxPCSource,
            ALUOp => auxALUOp,
            ALUSrcB => auxALUSrcB,
			   ALUSrcA => auxALUSrcA,
			   RegWrite => auxRegWrite,
			   RegDest => auxRegDest
	);
	
	inst_dispManager : DisplaysManager
	port map(
				rst_i => reset_global,
            clk_i => clk_global,
            en_i => auxClockDivider2,
            a_i => auxPort0(3 downto 0),
            b_i => auxPort1(3 downto 0),
            c_i => auxPort2(3 downto 0),
            d_i => "0000",
            en_n_o => en_n_o,
            hex_o => auxHex
	);
	
	inst_disp : Display7Segments
	port map(
				hex_i => auxHex,
            leds_n_o => display_n_o
	);
	
--	instClockDivider1 : ClockDivisorN
--	generic map (DIVIDE => 2)
--   port map ( 
--			    clk_i => clk_global,
--             clk_div_o => auxClockDivider1
--	);
	
	-- Comment above and un comment below when using on FPGA, 
	-- memory enable must also be changed higher up in this file.
	
	instClockDivider1 : ClockDivisorN
	generic map (DIVIDE => 2)
   port map ( 
			  clk_i => auxClockDivider_global,
           clk_div_o => auxClockDivider1			-- Everything but memory uses this clock
	);
	
	
	instClockDivider3 : ClockDivisorN
	generic map (DIVIDE => 500000)
   port map ( 
			  clk_i => clk_global,
           clk_div_o => auxClockDivider_global  -- Memory uses this clock directly
	);
	
	instClockDivider2 : ClockDivisorN
	generic map (DIVIDE => 2500)
   port map ( 
				 clk_i => clk_global,
             clk_div_o => auxClockDivider2		-- For display manager
	);
	
	

end Structural;

