<!DOCTYPE html>
<html>
<head>
	<title>Even or Odd</title>
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
	    if($number % 2 == 0){ 
	       ?><h1>Your Number <?php echo "<span>$number</span>" ?> 
	       is <?php echo "<span>EVEN</span>"?> </h1>
	   <?php }  
	   else{ ?>
	       <h1>Your Number <?php echo "<span>$number</span>" ?> 
	       is <?php echo "<span>ODD</span>"?> </h1>
	       
	   <?php }  
	    
	  }   
	$number = 528; 
	$ans = find($number); 
	?>
	
</body>
</html>
