#include<stdio.h>
int main()
{
    int a[30][30],b[30][30],m,n,i,j,sum=0;
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
            b[i][j]=sum;
        } 
        printf("\n");      
    }
         printf(" after sum new array is : %d ",b[i][j]);
 
return 0;
}
