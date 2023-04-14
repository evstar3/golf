f(s,n,c,t)char**s;{int L[]={47,23,55760,4,0,0,0,0,0,816,2,0,0,0,0,0,3,0,0,5,3164,0,0,0,616,16656,1,0,11,23,0,104};for(t=0;n--;t+=c*L[((**s*2[*s++]*7711)>>15)&31])for(c=atoi(*s);*(*s)++-32;);return t;}

#include <stdio.h>
int main()
{
    char *test[][17] = {
        {"1 red"},
        {"7 green"},
        {"5 bfb", "11 moab"},
        {"1 red", "2 yellow", "3 white", "4 zebra", "5 moab", "6 ddt"},
        {"1 moab", "1 bfb", "1 zomg", "1 ddt", "1 bad", "1 red", "1 blue", "1 green", "1 yellow", "1 pink", "1 black", "1 white", "1 purple", "1 lead", "1 zebra", "1 rainbow", "1 ceramic"},
    };

    size_t lengths[] = {1,1,2,6,17};

    for (int i = 0; i < 5; i++) {
        printf("%d\n", f(test[i], lengths[i]));
    }
    
    return 0;
}