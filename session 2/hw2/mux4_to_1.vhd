----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:47:03 03/10/2021 
-- Design Name: 
-- Module Name:    mux4_to_1 - Behavioral 
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

entity mux4_to_1 is
    Port ( 
			in1 : in  STD_LOGIC_vector(3 downto 0);
			in2 : in  STD_LOGIC_vector(3 downto 0);
			in3 : in  STD_LOGIC_vector(3 downto 0);
			in4 : in  STD_LOGIC_vector(3 downto 0);
			s00: in STD_LOGIC;
			S10: in STD_LOGIC;
         out12 : out  STD_LOGIC_vector(3 downto 0));
           
end mux4_to_1;

architecture Behavioral of mux4_to_1 is
		
	component  multiplexer is
    Port ( a : in  STD_LOGIC;
           b : in  STD_LOGIC;
           c : in  STD_LOGIC;
           d : in  STD_LOGIC;
           s0 : in  STD_LOGIC;
           s1 : in  STD_LOGIC;
           out1 : out  STD_LOGIC);
			end  component multiplexer;

begin
	multiplexer1: multiplexer port map (a=>in1(0),b=>in2(0),c=>in3(0),d=>in4(0),s0=>s00,s1=>s10,out1=>out12(0));
	multiplexer2: multiplexer port map (a=>in1(1),b=>in2(1),c=>in3(1),d=>in4(1),s0=>s00,s1=>s10,out1=>out12(1));
	multiplexer3: multiplexer port map (a=>in1(2),b=>in2(2),c=>in3(2),d=>in4(2),s0=>s00,s1=>s10,out1=>out12(2));
	multiplexer4: multiplexer port map (a=>in1(3),b=>in2(3),c=>in3(3),d=>in4(3),s0=>s00,s1=>s10,out1=>out12(3));
	
	
	
end Behavioral;

