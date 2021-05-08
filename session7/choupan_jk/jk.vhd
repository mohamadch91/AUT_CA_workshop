----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:50:16 04/07/2021 
-- Design Name: 
-- Module Name:    jk - Behavioral 
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

entity jk is
    Port ( j : in  STD_LOGIC;
           k : in  STD_LOGIC;
			   reset : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           Q : out  STD_LOGIC;
           QN : out  STD_LOGIC
          );
end jk;

architecture Behavioral of jk is
	signal temp:std_logic_vector(1 downto 0);
	signal output_internal:std_logic;
	
begin
temp<=  j & k;
reg:PROCESS(clk,reset)
begin 
	if (reset='1') then 
			output_internal<='0';
	elsif (clk' event and clk='0') then 
			case temp is
				when  "00" =>
					output_internal<=output_internal;
				when "01" =>
					output_internal<='0';
				when "10" =>
					output_internal<='1';
				when "11" =>
					output_internal<= not output_internal;
				end case;				
		end if;			
end PROCESS;
Q<= output_internal;
QN<= not output_internal;
end behavioral;

