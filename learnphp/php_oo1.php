<?php

class Person {
    public $fname;
    public $lname;
    public $gender;

    public function __construct($fname, $lname, $gender = 'f')
    {
        $this->fname = $fname;
        $this->lname = $lname;
        $this->gender = $gender;
    }
}

$tom = new Person('Tom', 'Ben', 'm');

echo $tom->fname;
echo "\n";

?>