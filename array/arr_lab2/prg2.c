#include<stdio.h>
int main()
{
    int a[30][30],m,n,i,j,count=0;
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
            count++;
         printf("%d ",a[i][j]);
        } 
        printf("\n");      
    }
    printf("\n array size is %d",count);
return 0;
}