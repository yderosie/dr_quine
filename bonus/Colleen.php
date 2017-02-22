<?php
function second_function(){}
/*
	com1
*/
function main()
{
	/*
		com2
	*/
	$a='<?php%cfunction second_function(){}%c/*%c%ccom1%c*/%cfunction main()%c{%c%c/*%c%c%ccom2%c%c*/%c%c$a=%c%s%c;%c%csecond_function();%c%cprintf($a,10,10,10,9,10,10,10,10,9,10,9,9,10,9,10,9,39,$a,39,10,9,10,9,10,10);%c}%cmain()?>';
	second_function();
	printf($a,10,10,10,9,10,10,10,10,9,10,9,9,10,9,10,9,39,$a,39,10,9,10,9,10,10);
}
main()?>