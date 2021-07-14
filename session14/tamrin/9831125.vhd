----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:22:04 06/09/2021 
-- Design Name: 
-- Module Name:    state_machine - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity state_machine is
    Port ( x : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           output : out  STD_LOGIC);
end state_machine;

architecture Behavioral of state_machine is
	type state_t is ( s0 , s1,s2,s3);
	signal state : state_t := s0;
	signal next_state : state_t := s0;
begin
	  process(state , x)
	begin
	case state is
			when s0=>
				if(x = '1') then
							next_state <= s1;
					else
							next_state <= s0 ;
					end if;

			when s1=>
						if(x = '1') then
							next_state <= s2;
						else
							next_state <= s0 ;
					end if;
					
			when s2=>
				if(x = '1') then
							next_state <= s3;
					else
							next_state <= s2 ;
					end if;
			when s3=>
				if(x = '1') then
							next_state <= s0;
					else
							next_state <= s3 ;
					end if;
									
			
	end case;
	end process;
	REG : process(clk)
	begin
	if(reset='1') then
			state <= s0;
		elsif(clk'event and clk = '1') then
					state <= next_state;
	end if;
						
		end process;
	output<='1' when state=s3 else 
				'0';	
end Behavioral;

