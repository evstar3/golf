#include"str.h"
#include<stdio.h>
#include<string.h>
#define H char
H*s,*t,*K="hrltusaged",*A;int f=1,b,i;int u(int s){puts(K);exit(s);}void N(H*s,H*t){H l[99];for(void(*p[])(H*)={str_chomp,str_reverse,str_lower,str_title,str_upper,str_strip};fgets(l,99,stdin);puts(l)){if(f&1<<9)str_delete(l,s);if(s&&t)str_translate(l,s,t);for(i=0;i<6;i++)if(f&1<<i)p[i](l);}}int main(int C,H*V[]){for(;--C;)if(*(A=*++V)-45)if(s){if(t)u(1);t=A;}else s=A;else f|=1<<((b=strchr(K,A[1])-K)>0?b:b?u(1):u(0));N(s,t);}