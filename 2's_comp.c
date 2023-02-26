#include <stdio.h>
int main()
{
    int size = 8;
    char one[size + 1];
    char two[size + 1];
    char res[size + 1];
    int carry = 1;
    gets(one);

    // 1's complement
    for (int i = 0; i < size; i++)
    {
        if (one[i] == '1')
        {
            two[i] = '0';
        }
        else
        {
            two[i] = '1';
        }
    }
    two[size] = '\0';
    // 2's complement
    for (int i = size - 1; i >= 0; i--)
    {
        if (two[i] == '1' && carry == 1)
        {
            res[i] = '0';
        }
        else if (two[i] == '0' && carry == 1)
        {
            res[i] = '1';

            carry = 0;
        }
        else
        {
            res[i] = two[i];
        }
    }
    res[size] = '\0';
    printf("2's complement is:");
    for (int i = 0; i < size; i++)
    {
        printf("%c", res[i]);
    }
    return 0;
}
// pseudo code:
// 1.declare the size as 8 since we are dealing with 8 bit number and declare 3 char array as one, two and three
// and integer variable carry as 1.
// 2. input the binary number in the char array one.
// 3.find the 1's complement by looping the char array
// 	4.if the element is '1' replace it with '0' and viseversa in the char array two
// 5.find the 2's complement by looping the array in reverse order
// 	6.if the element of char array two and carry are equals to '1' input '0' in the
// 	  in the new char array res.
// 	7. if the element of char array two is '0' and carry is '1' input '1' in the
// 	    cahr array res.
// 	8. else enter the elements in char array two into char array res.
// 6.print the elements of char array res which is the 2's complement.
