#include <stdio.h>
#include <ctype.h>
void sort(char arr[], int start, int length);
int main()
{
    char arr[50];
    int arr1[10];
    scanf("%s", arr);
    int i = 0, j = 1, length = 0;
    arr1[0] = -1;
    while (arr[i + 1] != '\0')
    {
        if (isdigit(arr[i]) && isalpha(arr[i + 1]) || isalpha(arr[i]) && isdigit(arr[i + 1]))
        {
            arr1[j] = i;
            j++;
        }
        i++;
        length++;
    }
    arr1[j] = length;
    for (int k = 0; k < j; k++)
    {
        sort(arr, arr1[k] + 1, arr1[k + 1]);
    }
    printf("%s", arr);
    return 0;
}

void sort(char arr[], int start, int length)
{
    char temp;
    for (int i = start; i <= length - 1; i++)
    {
        for (int j = i + 1; j <= length; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}