#include <stdio.h>
#include <stdlib.h>
// Cryptography used:caesar cipher
void encrypt(char *in_file, char *out_file);
void decrypt(char *in_file, char *out_file);
int main()
{
    char in_file[20], out_file[20];
    char c;
    printf("-------------------------------------------------------------------------------------\n");
    printf("Enter the choice:\n");
    printf("E to encrypt\n");
    printf("D to decrypt\n");
    printf("Q to quit\n");
    scanf("%c", &c);
    switch (c)
    {
    case 'E':
        printf("enter the file to be encrypted\n");
        scanf("%s", in_file);
        printf("save as (new file name):\n");
        scanf("%s", out_file);
        encrypt(in_file, out_file);
        printf("Encrypted file is: %s\n", out_file);
        break;
    case 'D':
        printf("Enter the file to be decrypted\n");
        scanf("%s", in_file);
        printf("save as (new file name):\n");
        scanf("%s", out_file);
        decrypt(in_file, out_file);
        printf("Decrypted file is: %s\n", out_file);
        break;
    case 'Q':
        break;
    }
    return 0;
}
void encrypt(char *in_file, char *out_file)
{
    FILE *in = fopen(in_file, "r");
    FILE *out = fopen(out_file, "w");
    if (in == NULL || out == NULL)
    {
        printf("file not exist");
        exit(4);
    }
    char ch;
    while ((ch = fgetc(in)) != EOF)
    {
        ch += 3;
        fputc(ch, out);
    }
    fclose(in);
    fclose(out);
}
void decrypt(char *in_file, char *out_file)
{
    FILE *in = fopen(in_file, "r");
    FILE *out = fopen(out_file, "w");
    if (in == NULL || out == NULL)
    {
        printf("file not exist");
        exit(4);
    }
    char ch;
    while ((ch = fgetc(in)) != EOF)
    {
        ch -= 3;
        fputc(ch, out);
    }
    fclose(in);
    fclose(out);
}
