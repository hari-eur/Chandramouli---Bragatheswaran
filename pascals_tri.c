#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int pr;
    for (int i = 0; i < n; i++)
    {
        for (int space = 1; space <= n - i; space++)
            printf(" ");
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                pr = 1;
            else
                pr = pr * (i - j + 1) / j;

            printf("%4d", pr);
        }
        printf("\n");
    }

    return 0;
}

// psedocode:
// 1.input the no.of rows as n
// 2.declare a outer loop form 0 to n-1
// 	3.declare a loop for space which should give the space equals n minus the current row
// 	4.declare a nested loop j running from 0 to i
// 		5.for each element calculate the value of pr
// 			6.pr=1 if i or j equals to 0
// 			7.else pr=pr*(i-j+1)/j.
// 			8.print the value of pr.
// 		9.print a new line