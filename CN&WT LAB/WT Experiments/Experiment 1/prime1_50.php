<!DOCTYPE html>
<html>
<body>

<?php
    for($i = 1; $i <= 50; $i++){
      $mm = 0;
      for($j = 2; $j <= $i/2; $j++) {
                if ($i % $j == 0) {
                  $mm++;
                  break;
                }
      }
      if ($mm == 0) {
                echo"$i ";
      }
    }
    
  ?>
</body>
</html>
