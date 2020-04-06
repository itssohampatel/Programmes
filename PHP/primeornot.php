<!DOCTYPE html>
<html>
<head>
	<title>Prime or Not-Prime</title>
	<style type="text/css">
		h1{
			font-weight: 400;
			font-size: 60px;
			text-align: center;
			margin-top: 40vh;
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
	    if ($number == 1) 
	    return 0; 
	    for ($i = 2; $i <= $number/2; $i++){ 
	        if ($number % $i == 0) 
	            return 0; 
	    } 
	    return 1; 
	}
	$number = 31; 
	$flag = find($number); 
	if ($flag == 1){?>
	    <h1>Your Number <?php echo "<span>$number</span>" ?> 
	    is <?php echo "<span>Prime</span>"?> </h1>
<?php }else{ ?>
	    <h1>Your Number <?php echo "<span>$number</span>" ?> 
	    is <?php echo "<span>Not-Prime</span>"?> </h1>
<?php } ?>	
</body>
</html>
