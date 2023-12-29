// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,b,temp;
    printf("enter any two numbers");
    scanf("%d %d",&a,&b);
    printf("\nbefore swapping:%d %d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nafter swapping:%d %d",a,b);
    return 0;
}