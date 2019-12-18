<?php 
class Books { 

	/* Member variables */
	var $price; 
	var $title; 
		
	/* Member functions */
	function setPrice($par){ 
		$this->price = $par; 
	} 
		
	function getPrice(){ 
		echo $this->price."<br>"; 
	} 
		
	function setTitle($par){ 
		$this->title = $par; 
	} 
		
	function getTitle(){ 
		echo $this->title."<br>" ; 
	} 
} 

/* Creating New object using "new" operator */
$maths = new Books; 

/* Setting title and prices for the object */
$maths->setTitle( "Algebra" ); 
$maths->setPrice( 7 ); 

/* Calling Member Functions */
$maths->getTitle(); 
$maths->getPrice(); 

// note, how above code doesn't use constructor.  why?
// what advantage does constructor give you to above???
?> 

