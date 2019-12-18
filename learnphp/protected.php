<?php

ini_set('display_errors', 'On');

class demo {
   protected function show()
   {
       echo "This is a method of base class";
   }
}

class child extends demo {
  public function display()
   {
         echo $this->show();
   }
}

$obj= new child();
$obj->display();

/*
I wanted to test if a protected function of the parent can be called by its child.  but sounds like what you are saying is that the call to the parent's method must come from within the child's class by having a child's method call its parent's method and not directly from the instantiation of the child, as I did above?
*/

?>
