----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:05:29 03/10/2021 
-- Design Name: 
-- Module Name:    multiplexer - Behavioral 
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

entity multiplexer is
    Port ( a : in  STD_LOGIC;
           b : in  STD_LOGIC;
           c : in  STD_LOGIC;
           d : in  STD_LOGIC;
           s0 : in  STD_LOGIC;
           s1 : in  STD_LOGIC;
           out1 : out  STD_LOGIC);
end multiplexer;

architecture Behavioral of multiplexer is
	signal and1:STD_LOGIC;
	signal and12:STD_LOGIC;
	signal and13:STD_LOGIC;
	signal and14:STD_LOGIC;

begin
	and1<=a and (not s0)and (not s1);
	and12<=b and s0 and (not s1);
	and13<=c and s1 and (not s0);
	and14<=d and s1 and s0;
	out1<=and1 or and12 or and13 or and14;

end Behavioral;

