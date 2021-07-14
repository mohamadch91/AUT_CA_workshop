library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity subtractor is
  port(
    A: in std_logic_vector(31 downto 0);
    B: in std_logic_vector(31 downto 0);
    result: out std_logic_vector(31 downto 0)
  );
end subtractor;

architecture behavioral of subtractor is
    signal res_temp: std_logic_vector(31 downto 0);
    signal frac_sub: std_logic_vector(23 downto 0);
    signal A_temp : std_logic_vector(31 downto 0);
    signal B_temp : std_logic_vector(31 downto 0);
  begin
    process (A, B)
      variable exp_diff: integer;
      variable temp_flag : integer;
      begin
        A_temp <= A;
        B_temp <= B;

        if(to_integer(unsigned(B)) = 0) then
          res_temp <= A_temp;
        elsif(to_integer(unsigned(A)) = 0) then
          res_temp <= not(B_temp(31)) & B_Temp(30 downto 0); -- A - B = 0 - B = -B
        else
          -- finding the difference between to exponent
          exp_diff := to_integer(unsigned(A_temp(30 downto 23))) - to_integer(unsigned(B_temp(30 downto 23)));
          -- shifting the small exponent to right
          if (exp_diff >= 0) then -- this means A>B
              res_temp (30 downto 23) <= A_temp(30 downto 23); -- final exponent will be A's exponent
              B_temp(22 downto 0) <= to_stdlogicvector(to_bitvector(B_temp(22 downto 0)) srl exp_diff); --shifting B fraction to the right
              
          else
              res_temp(30 downto 23) <= B_temp(30 downto 23); -- final exponent will be B's exponent
              A_temp(22 downto 0) <= to_stdlogicvector(to_bitvector(A_temp(22 downto 0)) srl -1*exp_diff); -- shifting A's fraction to the right
              
          end if;

        -- calculating subtraction
          if (A_temp(31) = '0') and (B_temp(31) = '0') then -- A > 0 and B>0
              temp_flag := to_integer(unsigned(A_temp(22 downto 0)) - unsigned(B_temp(22 downto 0)));
              if(temp_flag>= 0) then
                res_temp(31) <= '0'; -- this means fraction(a) > fraction(b) and a-b >0 -> sign bit = 0
              else
                res_temp(31) <= '1';
              end if;
              frac_sub <= std_logic_vector(unsigned('1' & A_temp(22 downto 0)) - unsigned('1' & B_Temp(22 downto 0)));
          elsif (A_temp(31) = '0') and (B_temp(31) = '1') then -- situation a>0 and b<0 : result would be always positive A - (-b) > 0
                res_temp(31) <= '0';
                frac_sub <= std_logic_vector(unsigned('1' & A_temp(22 downto 0)) + unsigned('1' & B_Temp(22 downto 0)));
          elsif (A_temp(31) = '1') and (B_temp(31) = '0')then -- a<0 and b > 0
                temp_flag := to_integer(unsigned(B_temp(22 downto 0)) - unsigned(A_temp(22 downto 0)));
                if(temp_flag>=0) then
                  res_temp(31) <= '0'; -- this means fraction(b) > fraction(a) and a-b >0 -> sign bit = 0
                else
                  res_temp(31)<= '1';
                end if;
                frac_sub <= std_logic_vector(unsigned('1' & B_temp(22 downto 0)) - unsigned('1' & A_Temp(22 downto 0)));-- adding additional bit to perform operation
          elsif (A_temp(31) = '1') and (B_temp(31) = '1') then -- this means a<0 and b<0
                res_temp(31) <= '1';
                frac_sub <= std_logic_vector(unsigned('1' & B_temp(22 downto 0)) - unsigned('1' & A_Temp(22 downto 0)));
          end if;

          if(res_temp(23) = '1') then
            -- it means sum of two fractions overflowed. so we shift fraction to left by 1 time and add increase exponent by one
              frac_sub <= to_stdlogicvector(to_bitvector(frac_sub) sll 1);
              res_temp(30 downto 23) <= std_logic_vector(unsigned(A_temp(30 downto 23)) + 1);
          end if;
          -- the final fraction is ready at this stage
          res_temp(22 downto 0) <= std_logic_vector(frac_sub(22 downto 0));

          -- handeling underflow and normlize
          while (res_temp(22) = '0') loop
            -- shifting one to left to remove 0 in res_temp(22) and add 1 to exponent
          res_temp(22 downto 0)  <= to_stdlogicvector(to_bitvector(res_temp(22 downto 0)) sll 1);
          res_temp(30 downto 23) <= std_logic_vector(unsigned(res_temp(30 downto 23)) + 1);
          end loop;

        end if;
        result <= res_temp;
  end process;
end behavioral;
