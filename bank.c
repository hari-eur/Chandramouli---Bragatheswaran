#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int c, c1;
    char b[100];
    do
    {
        printf("-------------------------------------------------------------------------------------\n");
        printf("Choose your Bank:\n");
        printf("1. Axis\n");
        printf("2. BOB\n");
        printf("3. IOB\n");
        printf("Press 4 to exit\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            strcpy(b, "Axis");
            break;
        case 2:
            strcpy(b, "BOB");
            break;
        case 3:
            strcpy(b, "IOB");
            break;
        default:
            exit(0);
        }
        printf("Please choose your %s account type:\n", b);
        printf("1. Savings account\n");
        printf("2. Current account\n");
        printf("3. Demat account\n");
        printf("4. Back\n");
        scanf("%d", &c1);
        switch (c1)
        {
        case 1:
            printf("Savings account details:\n");
            printf("Account = Active*\n");
            if (c == 1)
            {
                printf("Account balance = 2000\n");
                printf("Interest rate = 7.5%%\n");
            }
            else if (c == 2)
            {
                printf("Account balance = 10000\n");
                printf("Interest rate = 5.5%%\n");
            }
            if (c == 3)
            {
                printf("Account balance = 6000\n");
                printf("Interest rate = 8.5%%\n");
            }
            printf("Benefits: High interest\n\n");
            break;

        case 2:
            printf("Current account details: \n");
            if (c == 1)
            {
                printf("Interest rate 2.2%%\n");
                printf("Account balance = 820.67\n");
            }
            else if (c == 2)
            {
                printf("Interest rate 1.2%%\n");
                printf("Account balance = 720.01\n");
            }
            else
            {
                printf("Interest rate 2.2%%\n");
                printf("Account balance = 9450.00\n");
            }
            printf("Benefits: Easy internet banking\n\n");
            break;
        case 3:
            printf("Demat account details: \n");
            if (c == 1)
            {
                printf("Transaction rate = 10.00\n");
                printf("Account balance = 231.01\n");
            }
            else if (c == 2)
            {
                printf("Transaction rate = 2.00\n");
                printf("Account balance = 781.45\n");
            }
            else
            {
                printf("Transaction rate = 5.00\n");
                printf("Account balance = 374.00\n");
            }
            printf("Benefits: Secure Transaction\n\n");
            break;
        case 4:
            break;
        default:
            exit(0);
        }

    } while (c != 4);

    return 0;
}
