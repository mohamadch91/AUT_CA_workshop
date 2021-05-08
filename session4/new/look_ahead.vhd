----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:56:56 04/28/2021 
-- Design Name: 
-- Module Name:    look_ahead - Behavioral 
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

entity look_ahead is

Port ( A : in STD_LOGIC_VECTOR (3 downto 0);
B : in STD_LOGIC_VECTOR (3 downto 0);
Cin : in STD_LOGIC;
S : out STD_LOGIC_VECTOR (3 downto 0);
Cout : out STD_LOGIC);
end Look_Ahead;

architecture Behavioral of look_ahead is
component Partial_Full_Adder
Port ( A : in STD_LOGIC;
B : in STD_LOGIC;
Cin : in STD_LOGIC;
S : out STD_LOGIC;
P : out STD_LOGIC;
G : out STD_LOGIC);
end component;

signal gi :std_logic_vector (3 downto 0);
signal pi : std_logic_vector (3 downto 0);
 
begin
FA1: Partial_Full_Adder port map( A=>A(0), B=>B(0),Cin=> Cin,s=> S(0),p=> Pi(0),g=> Gi(0));
FA2: Partial_Full_Adder port map( A=>A(1), B=>B(1),cin=> c1,s=> S(1),p=> Pi(1), g=>Gi(1));
FA3: Partial_Full_Adder port map( A=>A(2), B=>B(2),cin=> c2,s=> S(2), p=>Pi(2), g=>Gi(2));
FA4: Partial_Full_Adder port map( A=>A(3), B=>B(3),cin=> c3,s=> S(3), p=>Pi(3), g=>Gi(3));
 
c1 <= G(0) OR (P(0) AND Cin);
c2 <= G(1) OR (P(1) AND G(0)) OR (P(1) AND P(0) AND Cin);
c3 <= G(2) OR (P(2) AND G(1)) OR (P(2) AND P(1) AND G(0)) OR (P(2) AND P(1) AND P(0) AND Cin);
Cout <= G(3) OR (P(3) AND G(2)) OR (P(3) AND P(2) AND G(1)) OR (P(3) AND P(2) AND P(1) AND G(0)) OR (P(3) AND P(2) AND P(1) AND P(0) AND Cin);
 

end Behavioral;

