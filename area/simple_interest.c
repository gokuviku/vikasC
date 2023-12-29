// Online C compiler to run C program online
#include <stdio.h>
void main() {
    // Write C code here
    float p,r,t;
    // a=p(1+rt);
    printf("enter principal amount :");
    scanf("\n %f",&p);
    printf("enter rate of interest :");
    scanf("\n %f",&r);
    printf("enter time in years :");
    scanf("\n %f",&t);
    printf("simple interest is %.2f:", p*r*t/100);
}