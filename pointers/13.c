#include <stdio.h>
#include <stdlib.h>

int main() {

  int n;
  int *num;
  printf("Enter the total number of elements: ");
  scanf("%d", &n);
  num = (int *)calloc(n, sizeof(int));
  if (num == NULL) {
    printf("Invalid input");
    exit(0);
  }
  for (int i = 0; i < n; ++i) {
    printf("Enter number%d: ",  1);
    scanf("%lf", num + i);
  }
  for (int i = 1; i < n; ++i) {
    if (*num < *(num + i)) {
      *num = *(num + i);
    }
  }
  printf("Largest number = %.2lf", *num);

  free(num);

  return 0;
}
