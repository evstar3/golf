#define S s[i]^=s[H-i-1]
i,o,L,H;f(char*s){L=strlen(s);H=L/2;for(o=0;o<L;s+=o+=H+L%2)for(i=H/2;i--;)S^=S;}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
int main()
{
    char *tests[] = {
        "1",
        "12",
        "123",
        "1234",
        "12345",
        "123456",
        "1234567",
        "12345678",
        "123456789",
        "pizza",
        "discord",
        "onomatopoeia"
    };

    char *expected[] = {
        "1",
        "12",
        "123",
        "2143",
        "21354",
        "321654",
        "3214765",
        "43218765",
        "432159876",
        "ipzaz",
        "sidcdro",
        "tamonoaieopo"
    };

    size_t num_tests = 12;


    for (int i = 0; i < num_tests; i++)
    {
        char *str = strdup(tests[i]);

        f(str);
        printf("%s\n",str);

        assert(!strcmp(str, expected[i]));

        free(str);
    }

    return 0;
}