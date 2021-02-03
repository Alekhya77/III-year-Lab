<!DOCTYPE html>
<html>
<body>

<?php
$word = "BVRIT";
$mystring = "BVRIT HYD";
 
if(strpos($mystring, $word) !== false){
    echo "Word Found";
} else{
    echo "Word Not Found";
}
?>

</body>
</html>
