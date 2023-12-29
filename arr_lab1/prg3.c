
#include <stdio.h>

int main() {

  int arr[10], i, n, sum = 0;
  float average;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  for(i=0; i < n; ++i) {
    printf("Enter number %d: ",i);
    scanf("%d", &arr[i]);
          
    sum += arr[i];
  }
  average = (float) sum / n;

  printf("Average = %.2f", average);

  return 0;
}
