<?php
    include './newclass.inc.php';
?>

<!DOCTYPE html>
    <head>
        <title></title>
    </head>
    <body>

        <?php
            $obj = new newClass;
            unset($obj);
            //$obj->setNewProperty("test");
            echo $obj->getProperty();
        ?>
    </body>
</html>

// way to destroy objects.