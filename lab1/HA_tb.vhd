--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   09:40:55 03/11/2021
-- Design Name:   
-- Module Name:   S:/uni/4/Az memar/lab1/HA_tb.vhd
-- Project Name:  lab1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: HA
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
 
ENTITY HA_tb IS
END HA_tb;
 
ARCHITECTURE behavior OF HA_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT HA
    PORT(
         I1 : IN  std_logic;
         I0 : IN  std_logic;
         S : OUT  std_logic;
         C : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal I1 : std_logic := '0';
   signal I0 : std_logic := '0';

 	--Outputs
   signal S : std_logic;
   signal C : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: HA PORT MAP (
          I1 => I1,
          I0 => I0,
          S => S,
          C => C
        );
	I1<='0','1' after 100 ns ,'0' after 200 ns,'1' after 300 ns;
	I0<='0','0' after 100 ns ,'1' after 200 ns,'1' after 300 ns;
	
	
	
	
   -- Clock process definitions
  

   -- Stimulus process
   
END;
