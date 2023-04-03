#include"str.h"
#include<stdio.h>
#include<string.h>
char*s,*t,*K="hrltusaged",*A;int f=1,i;int u(){puts(K);exit(!*A);}void N(char*t){char l[99];for(void(*p[])(char*)={str_chomp,str_reverse,str_lower,str_title,str_upper,str_strip};fgets(l,99,stdin);puts(l)){if(f>>9)str_delete(l,s);if(s&&t)str_translate(l,s,t);for(i=0;i<6;i++)p[f&1<<i?i:0](l);}}int main(int C,char*V[]){for(;--C;)if(*(A=*++V)-45)t=(s=s?:A)?A:t;else f|=1<<(strchr(K,A[1])-K?:u());N(t);}