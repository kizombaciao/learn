<?php 

// PHP program to illustrate 
// isset() function 
$num = '0'; 

if( isset( $num ) ) { 
	print_r(" $num is set with isset function <br>"); 
} 

// Declare an empty array 
$array = array(); 
	
// Use isset function 
echo isset($array['geeks']) ? 
'array is set.' : 'array is not set.'; 
?> 
