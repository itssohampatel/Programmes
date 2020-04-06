<!DOCTYPE html>
<html>
<head>
	<title>Sum of degits</title>
	<style type="text/css">
		h1{
			font-weight: 400;
			font-size: 60px;
			text-align: center;
			margin-top: 35vh;
		}
		span{
			background-color:rgba(255,0,0,0.5);
			padding: 10px;

		}
	</style>
</head>
<body>
<?php
	function find($number){ 
	    $fact = 1; 
	    for ($i = 1; $i <= $number; $i++){ 
	      $fact = $fact * $i; 
	    } 
	    return $fact; 
	}
	$number = 6; 
	$ans = find($number); 
	?>
	<h1>Your Number is <?php echo "<span>$number</span>"?>
		<br>
		<br>
		Factorial of Number is <?php echo "<span>$ans</span>"?>
	</h1>
	
</body>
</html>
