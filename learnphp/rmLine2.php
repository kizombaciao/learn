<?php


$new = '';
$id = "aaa";
$file_handle = fopen('ttt.csv','r');
while (!feof($file_handle))
{
    $line_of_text = fgetcsv($file_handle, 1024);    
    if ($id != $line_of_text[0])
    {
         $new .= implode(',',$line_of_text) . PHP_EOL;
    }
}
fclose($file_handle);

?>