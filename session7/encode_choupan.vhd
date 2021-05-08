----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:02:47 04/07/2021 
-- Design Name: 
-- Module Name:    perority_encoder - Behavioral 
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

entity perority_encoder is
    Port ( input : in  STD_LOGIC_vector (3 downto 0);
           output : out STD_LOGIC_vector (1 downto 0));
end perority_encoder;

architecture Behavioral of perority_encoder is
begin
-- plaviat ba 3 ast 
output<="11" when input="0111" else
			"10" when input="1011" else
			"01" when input="1101" else
			"00" when input="1110";


end Behavioral;

