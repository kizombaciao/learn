<?php 
//file is opened using fopen() function 
$my_file = fopen("gfg.txt", "rw"); 

// prints a single line at a time until end of file is reached 
while (! feof ($my_file)) 
{ 
echo fgets($my_file); 
} 

// file is closed using fclose() function 
fclose($my_file); 
?> 

// USEFUL!!!