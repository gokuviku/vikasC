#include<stdio.h>
int findDiv(int num);

void main()
{
    int num;

    printf("enter a number to find Divisible by 3 & 5 : ");
    scanf("%d",&num);
    printf("%d",findDiv(num));

}
int findDiv(int num){
    if (num%3==0 && num%5==0){
        printf("divisible by both 3 & 5 : ");
    }else{
        printf(" NOT divisible by both : ");
    }
    return num;
}
