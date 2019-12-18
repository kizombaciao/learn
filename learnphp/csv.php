<?php

$file = fopen("contacts.csv","r");
$r = fgetcsv($file);
print_r(fgetcsv($file));
$r = fgetcsv($file);
print_r(fgetcsv($file));

fclose($file);

echo "\n".$r[2];


// https://www.w3schools.com/php/func_filesystem_fgetcsv.asp
?>
