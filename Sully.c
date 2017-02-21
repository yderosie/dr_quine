#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 5;
	char s[50];
	sprintf(s, "Sully_%d.c", i-1);
	char s1[75];
	if ((i-1)==0)
	{
		sprintf(s1,"clang -Wall -Wextra -Werror Sully_%d.c -o Sully_%d",i-1,i-1);
	}
	else
	{
		sprintf(s1,"clang -Wall -Wextra -Werror Sully_%d.c -o Sully_%d && ./Sully_%d",i-1,i-1,i-1);
	}
	FILE *stream = fopen(s,"w");
	char*a="#include <stdio.h>%c#include <stdlib.h>%cint main()%c{%c%cint i = %d;%c%cchar s[50];%c%csprintf(s, %cSully_%cd.c%c, i-1);%c%cchar s1[75];%c%cif ((i-1)==0)%c%c{%c%c%csprintf(s1,%cclang -Wall -Wextra -Werror Sully_%cd.c -o Sully_%cd%c,i-1,i-1);%c%c}%c%celse%c%c{%c%c%csprintf(s1,%cclang -Wall -Wextra -Werror Sully_%cd.c -o Sully_%cd && ./Sully_%cd%c,i-1,i-1,i-1);%c%c}%c%cFILE *stream = fopen(s,%cw%c);%c%cchar*a=%c%s%c;%c%cfprintf(stream,a,10,10,10,10,9,i-1,10,9,10,9,34,37,34,10,9,10,9,10,9,10,9,9,34,37,37,34,10,9,10,9,10,9,10,9,9,34,37,37,37,34,10,9,10,9,34,34,10,9,34,a,34,10,9,10,9,10,9,10);%c%cfclose(stream);%c%csystem(s1);%c}";
	fprintf(stream,a,10,10,10,10,9,i-1,10,9,10,9,34,37,34,10,9,10,9,10,9,10,9,9,34,37,37,34,10,9,10,9,10,9,10,9,9,34,37,37,37,34,10,9,10,9,34,34,10,9,34,a,34,10,9,10,9,10,9,10);
	fclose(stream);
	system(s1);
}