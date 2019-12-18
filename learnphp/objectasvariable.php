<?php

ini_set('display_errors', 'On');

class aaa
{
	public function eee()
	{
		print("hihihi".PHP_EOL);
	}

}

class bbb
{
	public function eee()
	{
		print("hihihi".PHP_EOL);
	}
}

$arr = array();

$a = new aaa();
$b = new bbb();

$arr[] = $a;
$arr[] = $b;

foreach ($arr as $i)
	echo($i->eee());

//print(implode(",", $arr));


//foreach ($arr as $w) 
//{	
//	$w->eee();		
//}





?>