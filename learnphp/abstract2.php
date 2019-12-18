<?php 
ini_set('display_errors', 'On');


// example to understand that an abstract 
// class can not contain an method with 
// body in php 
abstract class Base { 
	abstract function printdata() { 
		echo "Parent class printdata"; 
	} 
} 

// you can't do this !!! 
// abstract class can only provide template
// the above echo statement cannot be inside the abstract
// the echo stmt needs to be inside of a class that extends the abstract class


?> 

