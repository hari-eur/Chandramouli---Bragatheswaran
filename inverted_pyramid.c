#include <stdio.h>
// Inverted pyramid
int main()
{
    int n;
    int l = 1;
    printf("enter the no.of rows:\n");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        int j = 1;
        while (j != l)
        {
            printf(" ");
            j++;
        }
        for (int k = 1; k <= (2 * (i - 1) + 1); k++)
        {
            printf("*");
        }
        printf("\n");
        l++;
    }
    return 0;
}