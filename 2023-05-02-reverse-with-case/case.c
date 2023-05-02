#define B v[c+~i]
#define C(x,y)isupper(x)?toupper(y):tolower(y)
i,t,c;f(char*v){for(c=strlen(v);i<c/2;i++)t=C(B,v[i]),v[i]=C(v[i],B),B=t;}


#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
    char *str = strdup(argv[1]);

    f(str);

    puts(str);

    free(str);
} 