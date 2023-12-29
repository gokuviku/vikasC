#include<stdio.h>
int main()
{
    int a[30][30],m,n,i,j,sum=0,anti;
    printf("\nEnter size of 2dArray row&column : ");
    scanf("%d %d",&m,&n);
    printf("\nenter elements of array:: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
         scanf("%d",&a[i][j]);
        }       
    }

    printf("elements of array:: \n");

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
         printf("%d ",a[i][j]);
        } 
     printf("\n");      
    }

    printf("\nsum of ANTI-daigonal elements of array:: ");

anti=m-1;
     for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        {
          if(i+j==anti)
            {
            sum=sum + a[i][j];
            }  
        } 
        printf("\n");      
    }
         printf("%d",sum);

    
 
return 0;
}
