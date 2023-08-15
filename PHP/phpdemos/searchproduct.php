<?php
$product=array("lays","nachos","pringles","mad angle triangle");
$p=$_POST['pnm'];
$flag=false;
for($i=0;$i<count($product);$i++){
    if($product[$i]==$p){
       echo "product exists";
       $flag=true;
       break; 
    }
}
if(!$flag){   //$flag==false
  echo "product not found and added successfully";
  array_push($product,$p);
}
foreach($product as $x){
    echo "$x <br>";
}
?>