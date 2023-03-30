#include"str.h"
#include<ctype.h>
#include<string.h>
#define V void
#define U toupper(*s)
#define C char
#define O C*s){for
#define I e=b=s;*b
#define T(x) {C w[1<<7]={0};for(b=from;*b;b++)(*b)[w]=x;for(I;b++
C*b,*e,*p,t;V str_lower(O(;(*s=tolower(*s));s++);}V str_upper(O(;(*s=U);s++);}V str_title(O(*s=U;*s;*s=isalpha(*e)?tolower(*s):U)e=s++;}V str_chomp(C*s){s+=strlen(s)-1;*s=*s-10?*s:0;}V str_strip(O(I&&isspace(*b);)b++;for(e=b+strlen(b)-1;*b&&isspace(*e);)e--;for(e++;b<e;)*s++=*b++;*s=0;}V str_reverse(O(I;)b++;for(b--;e<b;*e++=*b,*b--=t)t=*e;}V str_delete(C*s,C*from)T(1))if(!(*b)[w])*e++=*b;*e=0;}V str_translate(C*s,C*from,C*to)T(*to++),e++)*e=(*b)[w]?:*e;*e=0;}