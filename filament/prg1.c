#include<stdio.h>
#include<string.h>
int main()
{
    int ans;
    char str1[20],str2[20];
    printf("enter name : ");
    scanf("%s",str1);
    printf("name is : ");
    strcpy(str2,str1);
    strrev(str1);
    ans=strcmp(str1,str2);
    if(ans==0){
        printf("name is palindrome:");
    }else{
        printf("name is NOT palindrome:");

    }
return 0;
}