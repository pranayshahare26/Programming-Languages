<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
    function showtable($num){
        for($i=1;$i<=10;$i++){
            echo "$num * $i = ".($num*$i)."<br>";
        }
        echo "<hr>";

    }
    $a=$_GET["n1"];
    $b=$_GET["n2"];
    $btn=$_GET["btn"];
    echo "you enetred a: $a <br>";
    echo "you enetred b: $b <br>";
    echo "you enetred btn: $btn <br>";
    switch($btn){
        case "add":
            echo "Addition : ".($a+$b)."<br>";
            break;
        case "sub":
            echo "Subtraction : ".($a-$b)."<br>";
            break;
        case "mul":
            echo "Multiplication : ".($a*$b)."<br>";
            break;
        case "div":
            echo "division : ".($a/$b)."<br>";
            break;
        case "table":
            showtable($a);
            showtable($b);
    }
   echo "Done the job";

    
    ?>
</body>
</html>