<?php
spl_autoload_register('myAutoLoader');

function myAutoLoader($className)
{
    $path = "classes/";
    $extension = ".class.php";
    $fullPath = $path.$className.$extension;

    // extra: to reduce error clutter
    if (!file_exists($fullPath))
    {
        return false;
    }
    include_once $fullPath;
}

// USEFUL!
// automatically includes all new classes with explicit refference.
?>