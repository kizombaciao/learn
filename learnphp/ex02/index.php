<?php
    include './person.inc.php';
?>

<!DOCTYPE html>
<html lang="en" dir="ltr">
    <head>
        <meta charset="utf-8">
        <title></title>
    </head>
    <body>

        <?php
            $person1 = new Person1("Danny", "Blue", 28);
            //echo $person1->name;
            //echo $person1->eyecolor;
            //$person1->setName("John");
            //echo $person1->name;

            echo $person1->getName();
        ?>
    </body>
</html>

/*
the second echo doesn't get printed because a different instantiation.
*/