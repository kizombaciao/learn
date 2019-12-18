<?php

class Person
{
    //private $first = "D";
    //protected $first = "D";
    public $first = "D";
    private $last = "N";
    protected $age = "28";
}

class Pet extends Person
{
    public function owner()
    {
        $a = $this->age;
        return $a."\n";
    }
}

// visibility
// inheritance
// note, how with private, 'D' does not get printed.
// but with protected, 'D' does get printed.
// so protected extends the access of the variable to children
// but private variables are not allowed access by children.

$pet01 = new Pet();
echo $pet01->owner();

$person01 = new Person();
echo $person01->first."\n";
// above line only prints if set to public
// will not print if private or protected!!!

?>