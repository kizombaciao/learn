<?php
ini_set('display_errors', 'On');

class Collection implements Countable, JsonSerializable
{
	protected $items = [];

	public function add($value)
	{
		$this->items[] = $value; // can you add without keys, if associative ???
	}

	public function set($key, $value)
	{
		$this->items[$key] = $value; // is items associative ???
	}

	//public function toJson()
	public function jsonSerialize()
	{
		return json_encode($this->items);
	}

	public function count()
	{
		return count($this->items); // returns # of elements in items array.
	}
}

$c = new Collection();
$c->add('foo');
$c->add('bar');

echo $c->toJson();

echo count($c); // get 1 b/c only one object.

echo json_encode($c);


// INTERFACES
// https://www.youtube.com/watch?v=XI4-YcCtD5M&list=PLfdtiltiRHWF0RicJb20da8nECQ1jFvla&index=7

/*
https://vegibit.com/interface-examples-for-object-oriented-php/
https://daylerees.com/php-interfaces-explained/

https://www.geeksforgeeks.org/php-interface/
An Interface allows the users to create programs, 
specifying the public methods that a class must implement, 
without involving the complexities 
and details of how the particular methods are implemented. 
It is generally referred to as the next level of abstraction. 
It resembles the abstract methods, 
resembling the abstract classes. 
An Interface is defined just like a class is defined 
but with the class keyword replaced by the interface keyword 
and just the function prototypes. 
The interface contains no data variables. 
The interface is helpful in a way 
that it ensures to maintain a sort of metadata 
for all the methods a programmer wishes to work on.

Few characteristics of an Interface are:
1.An interface consists of methods that have no implementations, 
which means the interface methods are abstract methods.
2.All the methods in interfaces must have public visibility scope.
3.Interfaces are different from classes 
as the class can inherit from one class only 
whereas the class can implement one or more interfaces.

The class which implements an interface is called the Concrete Class. 
It must implement all the methods defined in an interface. 
Interfaces of the same name can’t be implemented because of ambiguity error. 
Just like any class, 
an interface can be extended using the extends operator 

// ???
Advantages of PHP Interface:
An interface allows unrelated classes to implement the same set of methods, 
regardless of their positions in the class inheritance hierarchy.
An interface can model multiple inheritances 
because a class can implement more than one interface 
whereas it can extend only one class.
The implementation of an inheritance will save the caller 
from full implementation of object methods 
and focus on just he objects interface, 
therefore, the caller interface remains unaffected.
*/

