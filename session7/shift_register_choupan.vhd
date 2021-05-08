----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:40:11 04/07/2021 
-- Design Name: 
-- Module Name:    shift_register - Behavioral 
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

entity shift_register is
    Port ( clk : in  STD_LOGIC;
			input:in std_logic;
			shift : in std_logic;
           reset : in  STD_LOGIC;
           output : out  STD_LOGIC);
end shift_register;

architecture Behavioral of shift_register is
	signal temp:std_logic_vector(2 downto 0):="010";
	signal output1:std_logic;
begin

reg:process(clk)
	begin
	-- dar kelas gofte shod ke rising bashad
	if(clk' event and clk='1') then
		if(shift='1') then 
			output1<=temp(0);
			temp<=input&temp(2 downto 0);
		end if;
	end if;
	
end process;			
output<=output1;
end Behavioral;

