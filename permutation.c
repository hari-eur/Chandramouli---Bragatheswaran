#include <stdio.h>
#include <string.h>
#include <ctype.h>
void swap(char *x, char *y);
void permute(char *a, int i, int n);
void fun(char *);
int main()
{
  char arr[10];
  scanf("%s", arr);
  int n = strlen(arr);
  char *ptr = arr;
  fun(ptr);
  printf("The possible Permutations of the strings are:\n");
  permute(ptr, 0, n - 1);
  return 0;
}

void fun(char *ptr)
{
  int special = 0, number = 0, upper = 0, lower = 0;
  for (int i = 0; i < strlen(ptr); i++)
  {
    if (ptr[i] >= 33 && ptr[i] <= 47 || ptr[i] >= 58 && ptr[i] <= 64 || ptr[i] >= 91 && ptr[i] <= 96 || ptr[i] >= 123 && ptr[i] <= 126)
      special = 1;
    if (isdigit(ptr[i]))
      number = 1;
    if (isupper(ptr[i]))
      upper = 1;
    if (islower(ptr[i]))
      lower = 1;
  }
  if (strlen(ptr) == 8 && upper && lower && number && special)
    printf("satisfied\n");
  else
    printf("not satisfied\n");
}
void swap(char *x, char *y)
{
  char temp;
  temp = *x;
  *x = *y;
  *y = temp;
}
void permute(char *a, int i, int n)
{
  int j;
  if (i == n)
    printf("%s\n", a);
  else
  {
    for (j = i; j <= n; j++)
    {
      swap((a + i), (a + j));
      permute(a, i + 1, n);
      swap((a + i), (a + j));
    }
  }
}