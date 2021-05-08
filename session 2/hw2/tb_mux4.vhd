--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:57:48 03/10/2021
-- Design Name:   
-- Module Name:   S:/uni/4/Az memar/session 2/hw2/tb_mux4.vhd
-- Project Name:  hw2
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: mux4_to_1
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb_mux4 IS
END tb_mux4;
 
ARCHITECTURE behavior OF tb_mux4 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT mux4_to_1
    PORT(
         in1 : IN  std_logic_vector(3 downto 0);
         in2 : IN  std_logic_vector(3 downto 0);
         in3 : IN  std_logic_vector(3 downto 0);
         in4 : IN  std_logic_vector(3 downto 0);
         s00 : IN  std_logic;
         S10 : IN  std_logic;
         out12 : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal in1 : std_logic_vector(3 downto 0) := (others => '0');
   signal in2 : std_logic_vector(3 downto 0) := (others => '0');
   signal in3 : std_logic_vector(3 downto 0) := (others => '0');
   signal in4 : std_logic_vector(3 downto 0) := (others => '0');
   signal s00 : std_logic := '0';
   signal S10 : std_logic := '0';

 	--Outputs
   signal out12 : std_logic_vector(3 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
  
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: mux4_to_1 PORT MAP (
          in1 => in1,
          in2 => in2,
          in3 => in3,
          in4 => in4,
          s00 => s00,
          S10 => S10,
          out12 => out12
        );

   -- Clock process definitions

 

   -- Stimulus process
   
   	
      -- hold reset state for 100 ns.
		
		in1<="0000" ,"1010" after 100 ns,"1111" after 200 ns;
		s00<='0' ,'0' after 100 ns,'1' after 200 ns;
		s10<='0' ,'1' after 100 ns,'1' after 200 ns;
      in2<="1111","1100" after 100 ns,"0000" after 200 ns;
		in3<="1001","1100" after 100 ns,"0110" after 200 ns;
		in4<="0001","1100" after 100 ns,"1010" after 200 ns;
		
		


      -- insert stimulus here 

     
    

END;
