#include <stdio.h>
#define DEF1
#define DEF2
#define FT(x)int main(){FILE *stream = fopen("Grace_kid.c","w");char*a="#include <stdio.h>%c#define DEF1%c#define DEF2%c#define FT(x)int main(){FILE *stream = fopen(%cGrace_kid.c%c,%cw%c);char*a=%c%s%c;fprintf(stream,a,10,10,10,34,34,34,34,34,a,34,10);}%cFT(1);";fprintf(stream,a,10,10,10,34,34,34,34,34,a,34,10);}
FT(1);