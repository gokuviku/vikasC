#include<stdio.h>
int main()
{
    int a[30][30],m,n,i,j,sum=0;
    float avg;
    printf("Enter size of 2dArray row&column : ");
    scanf("%d %d",&m,&n);
    printf("enter elements of array:: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
         scanf("%d",&a[i][j]);
        }       
    }

     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        sum=sum+a[i][j];
         printf("%d ",a[i][j]);
        } 
        printf("\n");      
    }
    avg=(float)sum/(m*n);
    printf("\n all elements are %d",sum);
    printf("\n array average is %.2f",avg);
return 0;
}
