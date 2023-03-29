f(M,n,v,l,c){l=0;for(n=c=1;M--;l+=v&&v--?:-1)n=((v=l?v:c++)?2*n:n/2+.5)+pow(2,v?l:l-2);return n;}

int main() {
    for (int i = 0; i < 1000; i++) {
        printf("%d\n", f(i));
    }
    return 0;
}