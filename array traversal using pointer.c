#include <stdio.h>
void fun(int *, int);
// array traversal using pointers
int main()
{
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  int *ptr = arr;
  fun(ptr, n);
  return 0;
}
void fun(int *ptr, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d", ptr[i]);
  }
}
