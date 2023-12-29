#include <stdio.h>
int main(){

int a,b,c,d,e;
printf("/n enter any five values");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

(a>b)?
(a>c)?
(a>d)?
(a>e)?
printf("/n a is max"):("/n e is max"): 
(d>e)?printf("/n d is max"):printf("/n e is max"): 
(c>d)?(c>e)?printf("/n c is max"):printf("/n e is max"):
(d>e)?printf("/n d is max"):printf("/n e is max"):
(b>c)?(b>d)?(b>e)?printf("/n b is max"):printf("/n e is max"):
(d>e)?printf("/n d is max"):printf("/n e is max"):
(c>d)?(c>e)?printf("/n c is max"):printf("/n e is max"):
(d>e)?printf("/n d is max"):printf("/n e is max");
    
    return 0;
}