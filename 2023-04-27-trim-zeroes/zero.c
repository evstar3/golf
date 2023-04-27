*p;f(char*s){for(;*s&&*s<49;s++);for(p=s;*++s;);for(;p<s&*s<49;*s--=0);puts(p);}

#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{   
    char *str = strdup(argv[1]);
    
    f(str);

    free(str);

    return 0;
}