B(a,z,M,b,v,t,L)int*a;{int*c,*p;for(M=b=z;--b;M=v?M:b)for(c=a+z,v=0;c-b-a;v|=t)for(t=*--c,p=c-1,L=b;L--;)t-=*p--;return M;}

#include <stdio.h>
#include <assert.h>
int main()
{
    int cases[][10] =
    {
        {3},
        {2, 2, 2},
        {1, 2, 2},
        {2, 3, 4, 7},
        {1, 3, 4, 7, 11, 18},
        {1, 1, 1, 1, 1, 1, 6},
        {2, 4, 5, 11, 20, 36, 67, 123, 226, 416},
        {1, 2, 4, 7, 8, 22, 43, 84, 164, 321},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
    };

    int lens[]    = {1, 3, 3, 4, 6, 7, 10, 10, 10};
    int answers[] = {1, 1, 3, 4, 2, 6,  3,  5, 10}; 

    for (int i = 0; i < 9; i++)
    {
        int answer = B(cases[i], lens[i]);

        printf("[");
        for (int j = 0; j < lens[i] - 1; j++)
            printf("%d, ", cases[i][j]);

        printf("%d] -> %d\n", cases[i][lens[i] - 1], answer);
        
        assert(answers[i] == answer);
    }

}