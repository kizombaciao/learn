<?php

class Books {
    var $price;
    var $title;

    function __construct($price, $title)
    {
        $this->price = $price;
        $this->title = $title;
    }
}

$book = new Books("title", 5.00);
echo $book->title;
echo $book->price;

// the above code works as well!!! without the need of public.
?>