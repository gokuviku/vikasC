#include <stdio.h>
int main(){

int a,b,c;
printf("/n enter any three values");
scanf("%d %d %d",&a,&b,&c);

(a>b)?(a>c)?printf("/n a is max"):printf("/n c is max"):(b>c)?printf("/n b is max"):printf("/n c is max");
    return 0;
}