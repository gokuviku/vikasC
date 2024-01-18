// C program to reverse an array using pointers

#include <stdio.h>
int main()
{
    int a[5], n, i, *ptr;
    printf("enter array of size = ");
    scanf("%d", &n);

    if (n > 6)//handling of array size properly
    {

        printf("enter array element \n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        ptr = &a[n - 1]; // because array starts with index 0 so last val will be -1 of original val;

        printf("entered array element = \n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", *ptr--);
        }
    }else{
        printf("\n maximum size of array is 20");
    }

    return 0;
}