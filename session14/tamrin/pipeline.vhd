----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:55:56 06/16/2021 
-- Design Name: 
-- Module Name:    pipeline - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity pipeline is
    Port ( a : in  signed (7 downto 0);
           b : in  signed (7 downto 0);
           c1 : in  signed (3 downto 0);
           c2 : in  signed (3 downto 0);
           clk : in  STD_LOGIC;
           s : out signed (8 downto 0));
end pipeline;

architecture Behavioral of pipeline is
signal ac1 :signed (11 downto 0) :=(others => '0');
signal bc2 :signed (11 downto 0) :=(others => '0');
signal final :signed (11 downto 0) :=(others => '0');
begin
s<=final(11 downto 4);
process(clk)
begin
	if(clk'event and clk = '1') then
	ac1<=A*c1;
	bc2<=b*c2;
	final<=ac1+bc2;
	end if;


end process;

end Behavioral;

