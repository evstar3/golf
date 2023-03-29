f(s,d)char*s;{for(;s[2];)if(d=rand()%~-strlen(++s))*s^=s[d]^=*s^=s[d];}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    char *strings[] = {"", "1", "12","123","1234","12345","123456","1234567"};
    int num_strings = sizeof(strings) / sizeof(*strings);

    char *s = malloc(32UL);
    for (int i = 0; i < num_strings; ++i) {
        strcpy(s, strings[i]);
        f(s);
        printf("\"%s\" -> \"%s\"\n", strings[i], s);
    }

    free(s);

    return 0;
}