<?php

$file = fopen("contacts.csv","r");
while(! feof($file))
{
  $ttt = fgetcsv($file);
}
fclose($file);

//echo $ttt[1][1];

//foreach ($ttt as $w)
//	echo $w[][1]."\n";


?>
