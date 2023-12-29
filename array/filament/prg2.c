#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="hello";
    char str2[]="im vikas";
    char str3[]="hello";
    char str4[]="hello";
    int compare,compare2;
    printf("\n uppercase : %s",strupr(str2));
    printf("\n lowercase : %s",strlwr(str2));
    printf("\n copy 1->2: %s",strcpy(str2,str));
    printf("\n reverse 2: %s",strrev(str));
    printf("\n concatinate of 1 : %s",strcat(str2,"soni"));
    printf("\n lenghth of 1 : %d",strlen(str));

    compare = strcmp(str,str2);
    compare2 = strcmp(str4,str3);
    printf("\n compare 1 and 2 : %d",compare);
    printf("\n compare 3 and 4 : %d",compare2);
 
return 0;
}