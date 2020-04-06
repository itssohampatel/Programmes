<!DOCTYPE html>
<html>
<head>
	<title>Sum of digits</title>
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
function sum($number) 
	{  
	    $sum = 0; 
	    while ($number != 0) 
	    { 
	        $sum = $sum + $number % 10; 
	        $number = $number/10; 
	    } 
	    return $sum; 
	} 
	$number = 5285; 
	$ans = sum($number); 
	?>
	<h1>Your Number is <?php echo "<span>$number</span>"?>
		<br>
		<br>
		Sum of Number is <?php echo "<span>$ans</span>"?>
	</h1>
	
</body>
</html>
