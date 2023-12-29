#include <stdio.h>

int main()
{

    int arr1[30],sum=0, i, n;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements in the array : ", n);
    for (i = 0; i < n; i++) {
    scanf("%d", &arr1[i]);
    }

    printf("\nElements in array are:");
    
        for (i = 0; i<n;i++){
            printf("%d ", arr1[i]);
    }

    // printf("\n SUM of Elements in array is n:");

     for (i = 0; i<n;i++){
        sum=sum+arr1[i];
    }

    printf("\n sum is: %d",sum);

    return 0;
}
