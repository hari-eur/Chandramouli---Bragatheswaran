#include <stdio.h>
// Full pyramid
int main()
{
    int n;
    int l = 1;
    printf("enter the no.of rows:\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int j = i;
        while (j != n)
        {
            printf(" ");
            j++;
        }
        for (int k = 1; k <= l; k++)
        {
            printf("*");
        }
        printf("\n");
        l += 2;
    }
    return 0;
}