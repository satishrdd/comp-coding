#!/usr/bin/perl
# your code goes here
@x=qw(January February March April May June July August September October November December);$n=<>;while($n){$d=$y=$m=0;$k=<>;for($i=9;$i<23;$i++){$j=$i-9;$y|=1<<$j if$k&1<<$i;$d|=1<<$j if$j<5&&$k&1<<$j;$m|=1<<$j-5 if$j<9&&$j>4&&$k&1<<$j;}print"$d $x[$m-1] $y\n";$n--}
