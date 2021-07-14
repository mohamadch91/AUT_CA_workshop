----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    05:42:11 06/15/2021 
-- Design Name: 
-- Module Name:    memory - Behavioral 
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
use ieee.std_logic_unsigned.all;
use ieee.numeric_std.all;

	

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values


-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity memory is
    Port ( address : in  STD_LOGIC_vector (15 downto 0);
				data_in: in  STD_LOGIC_vector (7 downto 0);
           r_or_w : in  STD_LOGIC;
           data : out  STD_LOGIC_vector (7 downto 0));
end memory;

architecture Behavioral of memory is
type byte is array (0 to 7) of std_logic;
type block1 is array (0 to 15 )  of std_logic_vector (7 downto 0);
type ram1 is array (0 to 4095) of block1;
type cache1 is array (0 to 127) of block1;
type tag1 is array (0 to 127) of std_logic_vector (4 downto 0);
signal tag:tag1;
signal ram :ram1;
signal cache:cache1; 
signal temp_addres: std_logic_vector (15 downto 0);
signal temp_read: std_logic ;
signal temp_out:std_logic_vector (7 downto 0);
signal temp_in:std_logic_vector (7 downto 0);


begin
temp_addres<=address;
temp_read<=r_or_w;
data<=temp_out;
temp_in<=data_in;

process(address)
begin
	for i in 0 to 4095 loop
		for j in 0 to 15 loop
			ram(i)(j)<=std_logic_vector(to_unsigned(j, 8));
		end loop;
	end loop;
	for i in 0 to 127 loop
			tag(i)<=std_logic_vector(to_unsigned(i, 5));
	end loop;
	
end process;
process(address)

variable main_block :std_logic_vector (11 downto 0);
variable main_index :std_logic_vector (3 downto 0);
variable cache_block :std_logic_vector (6 downto 0);
variable cache_tag :std_logic_vector (4 downto 0);
variable temp_block1 : integer:=0;
variable temp_index :integer:=0;
variable temp_block_ram :integer:=0;
begin

	if(temp_read='1') then
		main_block:=temp_addres(15 downto 4);
		main_index:=temp_addres(3 downto 0);
		cache_block:=main_block(6 downto 0);
		cache_tag:=temp_addres(11 downto 7);
		temp_block1:=to_integer(unsigned(cache_block));
		temp_index:=to_integer(unsigned(main_index));
		temp_block_ram:=to_integer(unsigned(main_block));
		if(tag(temp_block1)=cache_tag) then
			temp_out<=cache(temp_block1)(temp_index);
		else
			temp_out<=ram(temp_block_ram)(temp_index);
			cache(temp_block1)(temp_index)<=ram(temp_block_ram)(temp_index);
			tag(temp_block1)<=cache_tag;
		end if;	
	else
		main_block:=temp_addres(15 downto 4);
		main_index:=temp_addres(3 downto 0);
		cache_block:=main_block(6 downto 0);
		cache_tag:=temp_addres(11 downto 7);
		temp_block1:=to_integer(unsigned(cache_block));
		temp_index:=to_integer(unsigned(main_index));
		temp_block_ram:=to_integer(unsigned(main_block));
		if(tag(temp_block1)=cache_tag) then
			cache(temp_block1)(temp_index)<=temp_in;
			ram(temp_block_ram)(temp_index)<=temp_in;
		else
			ram(temp_block_ram)(temp_index)<=temp_in;
			tag(temp_block1)<=cache_tag;
		end if;	
		
	end if;	
	
end process;



end Behavioral;

