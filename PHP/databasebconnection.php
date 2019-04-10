<?php
$name=$_POST('uname');
$pass=$_POST('psw');
echo 'your first value is:'.$name."<br/>";
echo 'your second value is:'.$psw."<br/>";
$db=mysqli_connect("localhost","username","password","database");
$query="insert into name values('".$name"','".$psw."')";
if(mysqli_query($db,$query)){
	echo "submitted";
}else{
	echo "error";
}
?>
