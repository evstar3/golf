#include <stdio.h>
#include <math.h>

int main() {

    int r,s,t;

    for (s = 1; s < M; s++)
    {
        for (t = s; t < M; t++)
        {
            if ((int)sqrt(2*s*t) == sqrt(2*s*t)) {
                r = sqrt(2*s*t);
                if (r+s+t <= M)
                    printf("%d %d %d\n", r+s, r+t, r+s+t);
            }
        }
    }


    return 0;
}