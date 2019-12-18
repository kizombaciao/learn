<?php

class Color
{
    public $red = 111;
    public $green;

    public function __construct($color)
    {
        $this->red = $color;
        echo $this->red;

    }
    public function getColor($Color)
    {
        echo $Color->red;
    }

}

$Color = Color(222);

echo $Color->red;



?>

