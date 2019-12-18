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
            $person1 = new Persons();
            $person1->setName("Daniel");
            echo $person1->name;

            $person2 = new Persons();
            echo "222  ".$person2->name;

        ?>
    </body>
</html>

/*
the second echo doesn't get printed because a different instantiation.
*/