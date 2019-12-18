<?php
    include './person.inc.php';
?>

<!DOCTYPE html>
    <head>
        <title></title>
    </head>
    <body>

        <?php
            echo Person::$drinkingAge."<br>";
            Person::setDrinkingAge(18);
            echo Person::$drinkingAge."<br>";
            $person1 = new Person("Pual", "Brown", 33);
            echo $person1->getDA();
        
        ?>
    </body>
</html>

// note, we can access it without creating an object first.
// :: is used to access static properties.

