## swap

```
#define swap(a,b) {char tmp[10]; memcpy(tmp,&a,sizeof(a)); memcpy(&a,&b,sizeof(b)); memcpy(&b,tmp,sizeof(b));}

double a=2, b=3;
swap(a,b);
```
