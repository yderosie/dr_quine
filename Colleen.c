#include<stdio.h>
void second_function();
/*
	com1
*/
int main()
{
	/*
		com2
	*/
	char*a="#include<stdio.h>%cvoid second_function();%c/*%c%ccom1%c*/%cint main()%c{%c%c/*%c%c%ccom2%c%c*/%c%cchar*a=%c%s%c;%c%cprintf(a,10,10,10,9,10,10,10,10,9,10,9,9,10,9,10,9,34,a,34,10,9,10);%c}";
	printf(a,10,10,10,9,10,10,10,10,9,10,9,9,10,9,10,9,34,a,34,10,9,10);
}