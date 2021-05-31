----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:44:27 03/11/2021 
-- Design Name: 
-- Module Name:    FA - Behavioral 
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

entity FA is
    Port ( I1 : in  STD_LOGIC;
           I0 : in  STD_LOGIC;
           Cin : in  STD_LOGIC;
           S : out  STD_LOGIC;
           Cout : out  STD_LOGIC);
end FA;

architecture Behavioral of FA is
	signal S_HA1: STD_LOGIC;
	signal C_HA1: STD_LOGIC;
	signal S_HA2: STD_LOGIC;
	signal C_HA2: STD_LOGIC;
	component HA is
    Port ( I1 : in  STD_LOGIC;
           I0 : in  STD_LOGIC;
           S : out  STD_LOGIC;
           C : out  STD_LOGIC);

end component HA;
	

begin
	HA1 :HA port map (I1=>I1,I0=>I0,S=>S_HA1,C=>C_HA1);
	HA2 :HA port map (I1=>S_HA1,I0=>Cin,S=>S_HA2,C=>C_HA2);
	S<=S_HA2;
	Cout<=C_HA2 OR C_HA1;


end Behavioral;

