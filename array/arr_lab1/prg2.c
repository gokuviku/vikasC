

#include <stdio.h>

int main()
{

    int arr[50], i, n,count=0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in the array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    {
        for (i = 0; i<n;i++)
             count++;
            printf("%d ", arr[i]);
    }
        printf("\n count is : %d",count);
    

    return 0;
}
