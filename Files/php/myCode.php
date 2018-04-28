<html>
<head>
	<title>Table Created by PHP</title>
	<link rel="stylesheet" href="../../styles.css">
</head>
<body>
	<h2>Table Created by PHP</h2>
	<table>
		<?php 
		header('Content-Type: text/html');
		for ($x = 0; $x <= $_GET["number"]; $x++) {
		  echo "			<tr><td>Row# ", $x, "</td><td>", rand() % 100 + 1, "</td></tr>";
		}
		?>
	</table>
	</br>
	<form action = "../../index.html" method = "get">
			<input class = "button" type = "submit" value = "Go Back">
	</form>
</body>
</html>