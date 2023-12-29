#include<stdio.h>
int main()
{ int f,l,sum,rev=0,n,n2,magic,fls;//fls means sum of first last 
printf("\n\n enter any number : ");
scanf("%d",&n);
n2=n;//because n will be zero
l=n%10;// 123 ->1 ->2 ->3 //here i have taken last number for my reference point,to understand how first num work
while(n>0){
    f=n%10;//123 ->1 ->2 ->3
    n=n/10;//remove last 123 ->12 ->1
    sum=sum+f;
}
    printf("\n\n first num is :%d ",f);
    printf("\n\n last num is : %d",l);
    printf("\n\n sum is : %d",sum);

fls=sum;
while(fls>0){
    f=fls%10;//123 ->1 ->2 ->3
    rev=(rev*10+f);
    fls/=10; //fls = fls / 10
}
    magic=sum*rev; 
    printf("\n\n reverse is :  %d ",rev);
    // printf("\n magic is : %d ",magic);
    if(n2==magic){
        printf("\n\n hurray its a MAGIC number..👍👍👍👍👍👍");
        }
        else{
            printf("\n\n NOT a magic number...👎👎👎👎👎");
        }
return 0;
}

/*
================magic logic==================
1729
sum ==19 , reverse ==91 ,
multiplication= 19*91==1729

================sum logic==================
123
sum = sum+f == 0+3 ==3-> 3+2 ==5-> 5+1 ==6


================reverse logic==================
rev=0
n=15
rev*10+f == 5*10+1 == 50+1 == 51 == answer

rev=0
n=123
rev*10+f == 0*10+f == 0+3 ==3
rev*10+f == 3*10+2 == 32
rev*10+f == 32*10+1 == 321==answer

*/