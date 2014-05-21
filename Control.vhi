
-- VHDL Instantiation Created from source file Control.vhd -- 17:12:58 05/20/2014
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT Control
	PORT(
		clk_i : IN std_logic;
		reset : IN std_logic;
		en : IN std_logic;
		Op : IN std_logic_vector(5 downto 0);          
		PCWriteCond : OUT std_logic;
		PCWrite : OUT std_logic;
		IorD : OUT std_logic;
		MemRead : OUT std_logic;
		MemWrite : OUT std_logic_vector(0 to 0);
		MemToReg : OUT std_logic;
		IRWrite : OUT std_logic_vector(3 downto 0);
		PCSource : OUT std_logic_vector(1 downto 0);
		ALUOp : OUT std_logic_vector(1 downto 0);
		ALUSrcB : OUT std_logic_vector(1 downto 0);
		ALUSrcA : OUT std_logic;
		RegWrite : OUT std_logic;
		RegDest : OUT std_logic
		);
	END COMPONENT;

	Inst_Control: Control PORT MAP(
		clk_i => ,
		reset => ,
		en => ,
		Op => ,
		PCWriteCond => ,
		PCWrite => ,
		IorD => ,
		MemRead => ,
		MemWrite => ,
		MemToReg => ,
		IRWrite => ,
		PCSource => ,
		ALUOp => ,
		ALUSrcB => ,
		ALUSrcA => ,
		RegWrite => ,
		RegDest => 
	);


