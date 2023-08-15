<?php
$fp=fopen("file.txt","r");
$ws=0;
while(!feof($fp)){
    $s=fgets($fp);
    echo "$s ---->";
    $str=explode(" ",$s);
    echo count($str)."<br>";
    $ws=$ws+count($str);

}
fclose($fp);
echo "<br>Total words are: $ws";
?>