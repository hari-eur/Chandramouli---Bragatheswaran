#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n, sum = 0;
  scanf("%d", &n);
  int *ptr = (int *)malloc(n * sizeof(int));
  if (ptr == NULL)
  {
    printf("heap is full");
    exit(1);
  }
  for (int i = 0; i < n; i++)
  {
    scanf("%d", ptr + i);
    sum += *(ptr + i);
  }
  printf("%d", sum);
  free(ptr);
  return 0;
}
