<?php

class House
{
    private $address;

    public function __construct($address)
    {
        $this->address = $address;
    }

    public function getHouse()
    {
        return $this->address;
    }
}

?>