<?php 
// file is opened using fopen() function 
$my_file = fopen("gfg.txt", "rw"); 

// Prints a single line from the opened file pointer 
echo fgets($my_file); 
echo fgets($my_file); 
echo fgets($my_file); 

// file is closed using fclose() function 
fclose($my_file); 
?> 

// USEFUL!!!