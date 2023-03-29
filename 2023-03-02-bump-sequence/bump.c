#include <stdio.h>

d(n,l){
    return n/2 + 0.5+pow(2,l-2);
}

u(n,l){
    return 2*n + pow(2,l);
}
l;
int main(n,v,c) {
    
    n = c = 1;

    for (int i = 0 ; i < 100; i++) {
        printf("%d\n",n);

        if (l == 0) {
            v = c;
            c++;
        }

        if (v > 0) {
            n = u(n, l);
            l++;
            v--;
        }
        else
        {
            n = d(n, l);
            l--;
        }

        
    }

    return 0;
}
