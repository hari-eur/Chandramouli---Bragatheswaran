#include <stdio.h>
#define print(format, ...) printf(format, __VA_ARGS__)
int main()
{
    char data[] = "C programming";
    char data_1[] = "Chandramouli";
    char data_2[] = "embedUR";
    print("Welcome to %s\n", data);
    print("Hello to %s Welcome to %s\n", data_1, data_2);
}