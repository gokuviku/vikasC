#include<stdio.h>
int main()
{
int a[30],i,n;
printf("Enter size of values/Arrays :");
scanf("%d", &n);
printf("Enter number of elements ::");
for(i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}
printf("you have entered following elements",n);
for(i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}
return 0;
}