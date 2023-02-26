#include <stdio.h>
int main()
{
    int n;
    char ch;
    scanf("%d\n", &n);
    scanf("%c", &ch);
    int copy = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == i || j == copy)
            {
                printf("%c", ch);
            }
            printf("\t");
        }

        copy = copy - 1;
        printf("\n");
    }

    return 0;
}

// pseudo code:
// 1.declare the variable 'n' and 'ch'
// 2.input the no.of rows in 'n' and the symbol in 'ch'
// 3.assign the no.of rows 'n' to variable 'copy' ie copy=n.
// 4.for i=1 to 'n' do
// 	5.for j=1 to 'n' do
// 		6.if j equals to 'i' or 'copy'
// 			7.print 'ch'
// 		8.print tab space
// 	9.decrease copy by 1
// 	10.print new line
// 11.End