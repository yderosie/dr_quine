<?php
$i = 5;
$s = sprintf("Sully_%d.php", $i-1);
$stream = fopen($s,"w");
$a='<?php%c$i = %d;%c$s = sprintf("Sully_%cd.php", $i-1);%c$stream = fopen($s,%cw%c);%c$a=%c%s%c;%cfprintf($stream,$a,10,$i-1,10,37,10,34,34,10,39,$a,39,10,10,10,10,10,9,10);%cfclose($stream);%cif (($i-1) > 0)%c{%c%csystem("php $s");%c}?>';
fprintf($stream,$a,10,$i-1,10,37,10,34,34,10,39,$a,39,10,10,10,10,10,9,10);
fclose($stream);
if (($i-1) > 0)
{
	system("php $s");
}?>