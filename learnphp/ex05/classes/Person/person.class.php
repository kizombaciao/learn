<?php

namespace Person;

class Person
{
    private $name;
    private $eye;
    private $age;

    public function __construct($name, $eye, $age)
    {
        $this->name = $name;
        $this->eye = $eye;
        $this->age = $age;
    }

    public function getPerson()
    {
        return $this->name;
    }
}

?>