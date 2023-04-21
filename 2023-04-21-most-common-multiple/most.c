m,p,T;f(n,z,r,b)int*n,*r,*b;{for(r=calloc(T=~(1<<31),4);z--;n++)for(b=n;b++<n+z;)r[*n**b]++;for(m=p=0;T--;p++)m=r[p]>r[m]?p:m;m=m;}

    #include <stdio.h>
    #include <assert.h>

    int main(int argc, char *argv[])
    {
        int tests[][9] = {
            {2,3,4,5,6},
            {7,2},
            {2,3,3},
            {3,3,3},
            {1,1,1,1,2,2},
            {6,200,10,120},
            {2,3,4,5,6,7,8,8},
            {5,2,9,10,3,4,4,4,7},
            {9,7,10,9,7,8,5,10,1},
        };

        int expected[] = {
            12,
            14,
            6,
            9,
            2,
            1200,
            24,
            20,
            63
        };

        int sizes[] = {5,2,3,3,6,4,8,9,9};
        
        for (int i = 0; i < 9; i++)
        {
            printf("[");
            for (int j = 0; j < sizes[i] - 1; j++)
                printf("%d, ", tests[i][j]);
            printf("%d] -> ", tests[i][sizes[i] - 1]);

            int result = f(tests[i], sizes[i]);
            printf("%d\n", result);

            assert(result == expected[i]);
        }

        return 0;
    }

// 131
// m,p,T;f(n,z,r,b)int*n,*r,*b;{for(r=calloc(T=~(1<<31),4);z--;n++)for(b=n;b++<n+z;)r[*n**b]++;for(m=p=0;T--;p++)m=r[p]>r[m]?p:m;m=m;}
