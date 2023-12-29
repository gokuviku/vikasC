// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int salary,hra,da,ta;
    float sal;
    printf("enter base salary:");
    
    scanf("%d",&salary);

    hra=salary*0.1;
    da=salary*0.05;
    ta=salary*0.08;
    sal=salary+hra+da+ta;
    printf("gross salary:%f",sal);
}

