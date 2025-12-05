<?php
$somma=0;
while ($somma<90)
{
   $NumeroCasuale=rand(1,6); 
   echo "<TABLE><TR><TD>"
   echo "$NumeroCasuale</TD>";
   $somma+= $NumeroCasuale;  
}
echo "</TABLE>";
echo "<BR>La somma risultante e': $somma"; 
?>