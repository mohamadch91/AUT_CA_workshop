--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   00:03:45 04/17/2021
-- Design Name:   
-- Module Name:   S:/uni/4/Az memar/session7/az7/cam_tb.vhd
-- Project Name:  az7
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: cam
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
 
ENTITY cam_tb IS
END cam_tb;
 
ARCHITECTURE behavior OF cam_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT cam
    PORT(
         clk : IN  std_logic;
         reset : IN  std_logic;
         cam_enable : IN  std_logic;
         cam_data_in : IN  std_logic_vector(15 downto 0);
         cam_hit_out : OUT  std_logic;
         cam_addr_out : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';
   signal cam_enable : std_logic := '0';
   signal cam_data_in : std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs
   signal cam_hit_out : std_logic;
   signal cam_addr_out : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant clk_period : time := 40 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: cam PORT MAP (
          clk => clk,
          reset => reset,
          cam_enable => cam_enable,
          cam_data_in => cam_data_in,
          cam_hit_out => cam_hit_out,
          cam_addr_out => cam_addr_out
        );
	 cam_enable<='0','1' after 100 ns;
	 cam_data_in<= "1010101010101010","10101011111111" after 200 ns;
	 reset<='1';
	 
   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 


END;
