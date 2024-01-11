#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],replace,new;
    int i;
    printf("enter name : ");
    gets(str);
    printf("your name is: ");
    puts(str);

   printf("\n enter char u wnat to replace : ");
   fflush(stdin);
   scanf("%c",&replace);

   printf("\n enter new char u wnat to add : ");
    fflush(stdin);
   scanf("%c",&new);

    for(i = 0; i <str[i]!='\0'; i++)
    {
        if(str[i]==replace){
            str[i] = new;
        }
    }
   printf("\n after replace name is  : ");
   puts(str);

return 0;
}