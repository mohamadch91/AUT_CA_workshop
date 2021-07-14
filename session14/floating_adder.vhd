----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:22:02 06/08/2021 
-- Design Name: 
-- Module Name:    floating_adder - Behavioral 
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

entity floating_adder is

end floating_adder;
	  port (
              float1 :in std_logic_vector(8 downto 0);
				  float2: in std_logic_vector(8 downto 0);
              float_sum: out std_logic_vector(8 downto 0));
				  overflow: out std_logic ;
architecture Behavioral of floating_adder is
	signal overflow:std_logic;
	signal temp_ans:std_logic_vector(8 downto 0);
float_sum<=temp_ans;	
begin
	process
		if(float1="00000000") then
			temp_ans<=float2;
		end if;
		if(float2="00000000") then
			temp_ans<=float1;
		end if;
	end process
	process
		
			


end Behavioral;

