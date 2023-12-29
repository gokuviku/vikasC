// Program to find the average of n numbers using arrays

#include <stdio.h>

int main()
{

    int arr[10], i, n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in the array : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nElements in array are: ");
    {
        for (i = 0; i<n;i++)
            printf("%d ", arr[i]);
    }

    return 0;
}
