#include<stdio.h>
int main()
{
    int a[30][30],m,n,i,j,sum=0;
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
         printf("%d ",a[i][j]);
        } 
        printf("\n");      
    }

     for(i=0;i<m;i++){
        sum=0;
        for(j=0;j<n;j++){
        sum=sum+a[j][i];
        } 
        printf("sum of columns is :%d\n",sum);
    }
return 0;
}
