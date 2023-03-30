#include <stdio.h>
#include <string.h>
#include <ctype.h>
void nostrfun(char *arr);
void strfun(char *arr);
int main()
{
    char arr[20];
    scanf("%s", arr);
    nostrfun(arr);
    strfun(arr);
    return 0;
}
// Without string functions.
void nostrfun(char *arr)
{
    int i = 0, lower = 0, upper = 0, special = 0, number = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] >= 97 && arr[i] <= 122)
            lower = 1;
        if (arr[i] >= 65 && arr[i] <= 90)
            upper = 1;
        if (arr[i] >= 33 && arr[i] <= 47 || arr[i] >= 58 && arr[i] <= 64 || arr[i] >= 91 && arr[i] <= 96 || arr[i] >= 123 && arr[i] <= 126)
            special = 1;
        if (arr[i] >= 48 && arr[i] <= 57)
            number = 1;
        i++;
    }
    printf("Without using string functions:\n");
    if (i == 8 && lower && upper && special && number)
        printf("satisfied\n");
    else
        printf("not satisfied\n");
}
// With string functions.
void strfun(char *arr)
{

    int special = 0, number = 0, upper = 0, lower = 0;
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] >= 33 && arr[i] <= 47 || arr[i] >= 58 && arr[i] <= 64 || arr[i] >= 91 && arr[i] <= 96 || arr[i] >= 123 && arr[i] <= 126)
            special = 1;
        if (isdigit(arr[i]))
            number = 1;
        if (isupper(arr[i]))
            upper = 1;
        if (islower(arr[i]))
            lower = 1;
    }
    printf("with using string functions:\n");
    if (strlen(arr) == 8 && upper && lower && number && special)
        printf("satisfied\n");
    else
        printf("not satisfied\n");
}
