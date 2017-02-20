#include <stdio.h>
#include <stdlib.h>
int main()
{
	int f = 5;
	if (f<=0)
	{
		return(0);
	}
	char s[][10] = {"Sully_0.c","Sully_1.c","Sully_2.c","Sully_3.c","Sully_4.c"};
	char s1[][65] = {"clang -Wall -Wextra -Werror Sully_0.c -o Sully_0 && ./Sully_0","clang -Wall -Wextra -Werror Sully_1.c -o Sully_1 && ./Sully_1","clang -Wall -Wextra -Werror Sully_2.c -o Sully_2 && ./Sully_2","clang -Wall -Wextra -Werror Sully_3.c -o Sully_3 && ./Sully_3","clang -Wall -Wextra -Werror Sully_4.c -o Sully_4 && ./Sully_4"};
	FILE *stream = fopen(s[f-1],"w");
	char*a="#include <stdio.h>%c#include <stdlib.h>%cint main()%c{%c%cint f = %d;%c%cif (f<=0)%c%c{%c%c%creturn(0);%c%c}%c%cchar s[][10] = {%cSully_0.c%c,%cSully_1.c%c,%cSully_2.c%c,%cSully_3.c%c,%cSully_4.c%c};%c%cchar s1[][65] = {%cclang -Wall -Wextra -Werror Sully_0.c -o Sully_0 && ./Sully_0%c,%cclang -Wall -Wextra -Werror Sully_1.c -o Sully_1 && ./Sully_1%c,%cclang -Wall -Wextra -Werror Sully_2.c -o Sully_2 && ./Sully_2%c,%cclang -Wall -Wextra -Werror Sully_3.c -o Sully_3 && ./Sully_3%c,%cclang -Wall -Wextra -Werror Sully_4.c -o Sully_4 && ./Sully_4%c};%c%cFILE *stream = fopen(s[f-1],%cw%c);%c%cchar*a=%c%s%c;%c%cfprintf(stream,a,10,10,10,10,9,f-1,10,9,10,9,10,9,9,10,9,10,9,34,34,34,34,34,34,34,34,34,34,10,9,34,34,34,34,34,34,34,34,34,34,10,9,34,34,10,9,34,a,34,10,9,10,9,10,9,10);%c%cfclose(stream);%c%csystem(s1[f-1]);%c}";
	fprintf(stream,a,10,10,10,10,9,f-1,10,9,10,9,10,9,9,10,9,10,9,34,34,34,34,34,34,34,34,34,34,10,9,34,34,34,34,34,34,34,34,34,34,10,9,34,34,10,9,34,a,34,10,9,10,9,10,9,10);
	fclose(stream);
	system(s1[f-1]);
}