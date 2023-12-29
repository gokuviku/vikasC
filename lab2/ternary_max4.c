#include <stdio.h>
int main(){

int a,b,c,d;
printf("/n enter any four values");
scanf("%d %d %d %d",&a,&b,&c,&d);

(a>b)?(a>c)?(a>d)?printf("/n a is max"):printf("/n d is max"):(c>d)?printf("/n c is max"):printf("/n d is max"):(b>c)?(b>d)?printf("/n b is max"):printf("/n d is max"):(c>d)?printf("/n c is max"):printf("/n d is max");
    return 0;
}