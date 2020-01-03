<?php
$name = $_POST['username'];
$pass = $_POST['password'];
$db=mysqli_connect('127.0.0.1','sonu','22165810','data');
$query="insert into users values('".$name."','".$pass."');";
if(mysqli_query($db,$query)){
	echo "SUBMITTED";
}
else{
	echo "ERROR !";
}

?>
