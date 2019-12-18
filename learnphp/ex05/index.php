<?php
    include './includes/autoloader.inc.php';
?>

<!DOCTYPE html>
    <head>
        <title></title>
    </head>
    <body>

        <?php
            $person1 = new Person\Person("Paul", "Brown", 33);
            echo $person1->getPerson();
            echo "<br>";
            $house1 = new House("5th Avenue");
            echo $house1->getAddress();
            
        ?>
    </body>
</html>

// load classes automatically
// note, we can access it without creating an object first.

// namespaces