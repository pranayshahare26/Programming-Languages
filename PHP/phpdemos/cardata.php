<html>
<body>
<?php
$car=array("VOVLVO","BMW","SANTRO","CIVIC");
$cnm=$_GET["cname"];
echo "you entered".$_GET["cname"]."<br>";
echo "you entered".$_REQUEST["cname"]."<br>";
$flag=1;
foreach($car as $val){
	if($val==$cnm){
		$flag=0;
		echo "<h3>Car found</h3>";
		break;
	}
}
if($flag==1){
	echo "car not found";
}
?>
</body>
</html>