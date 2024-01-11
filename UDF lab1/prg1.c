#include<stdio.h>
int findCube(int);

void main()
{
    int num;

    printf("enter a number to find cube : ");
    scanf("%d",&num);
    printf("\n cube is %d",findCube(num));

}
int findCube(int num){
    return num*num*num;
}
