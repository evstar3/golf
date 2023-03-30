#include "str.h"

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *P;

enum {
    S   = 1<<0,
    R = 1<<1,
    L   = 1<<2,
    U   = 1<<3,
    T   = 1<<4,
    D  = 1<<5,
};

void u(int s) {
    fprintf(stderr, "Usage: %s SOURCE TARGET\n\n", P);
    perror("Post Translation filters:\n\n");
    perror("   -s      Strip whitespace\n");
    perror("   -r      Reverse l\n");
    perror("   -l      Convert to lowercase\n");
    perror("   -u      Convert to uppercase\n");
    perror("   -t      Convert to titlecase\n");
    perror("   -d      Delete letters in SOURCE\n");
    exit(s);
}

void translate_stream(char *s, char *t, int f) {
    char l[BUFSIZ];
    while (fgets(l,BUFSIZ,stdin)) {
        
        str_chomp(l);

        if (f & D)
            str_delete(l, s);

        if (s && t)
            str_translate(l, s, t);

        if (f & S)
            str_strip(l);

        if (f & R)
            str_reverse(l);

        if (f & L)
            str_lower(l);

        if (f & U)
            str_upper(l);
        
        if (f & T)
            str_title(l);

        printf("%s\n", l);

    }
}

int main(int argc, char *argv[])
{
    P = *argv;

    int f = 0;
    char *s = NULL;
    char *t = NULL;

    for (int i = 1; i < argc; i++)
    {
        char *arg = argv[i];

        if (arg[0] == '-')
            switch (arg[1])
            {
                case 's': 
                    f |= S;
                    break;
                case 'r': 
                    f |= R;
                    break;
                case 'l': 
                    f |= L;
                    break;
                case 'u': 
                    f |= U;
                    break;
                case 't': 
                    f |= T;
                    break;
                case 'd': 
                    f |= D;
                    break; 
                case 'h':
                    u(0);
                default:
                    u(1);
            }
        else
        {
            if (s && t)
                u(1);
            else if (s)
                t = arg;
            else
                s = arg;
        }
    }
        
    translate_stream(s, t, f);

    return 0;
}