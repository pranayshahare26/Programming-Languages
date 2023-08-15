<?php
function addword($wrd){
    $fp=fopen("word.txt","a");
    fwrite($fp,"\n$wrd");
    fclose($fp);
}
$wrd="joyxxxx";
$arr=file("word.txt");
print_r($arr);
$flag=false;
foreach($arr as $w){
    echo strlen($w);
    echo "$w--->$wrd<br>";
    if(trim($w)==$wrd){
        echo "word exists";
        $flag=true;
        break;

    }
}

if(!$flag){
    echo "word not found";
    addword($wrd);
}
?>