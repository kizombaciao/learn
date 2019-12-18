<?php

class Person1
{
    private $name;
    private $eyecolor;
    private $age;

    public function __construct($name, $eyecolor, $age)
    {
        $this->name = $name;
        $this->eyecolor = $eyecolor;
        $this->age = $age;
    }

    public function setName($name)
    {
        $this->name = $name;
    }

    // good practice:
    // useful because we want to keep the above properties private
    // we use a method to make them public
    public function getName()
    {
        return $this->name;
    }

    /*public function __destruct()
    {

    }*/
}

// constructor / destructor

?>