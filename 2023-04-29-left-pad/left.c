l;main(c,v)char**v;{c=c-3?*v[3]:32;for(l=atoi(v++[2]);l-->strlen(*v);)putchar(c);puts(*v);}