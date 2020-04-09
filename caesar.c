#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argv[1] == '\0')
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    int key = atoi(argv[1]);
    for (int q = 0; q < strlen(argv[1]); q++)
    {
        if (isalpha(argv[1][q]))
         {
            printf("Usage: ./caesar key\n");
            return 1;
         }
    }
    if (key < 0)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    if (argc != 2)
    {
        printf("Usage: ./carsar key\n");
        return 1;
    }
    if (argc == 2 && key >= 0)
    {
        string input = get_string("plain text: ");
        printf("ciphertext: ");
        for (int f = 0; f < strlen(input); f++)
        {
            if (input[f] >= 'a' && input[f] <= 'z')
            {
                if (input[f] +  (key % 26) > 122)
                {
                    int p = ((input[f] + (key %26)) - 122);
                    int y = p + 96;
                    printf("%c", y);
                }
                if (input[f] +  (key % 26) <= 122)
                {
                    printf("%c", input[f] +  (key % 26));
                }
            }
            if (input[f] >= 'A' && input[f] <= 'Z')  
            {
                if (input[f] +  (key % 26) > 122)
                {
                    int g = ((input[f] + (key %26)) - 122);
                    int x = g + 64;
                    printf("%c", x);
                }
                 if (input[f] +  (key % 26) <= 122)
                {
                    printf("%c", input[f] +  (key % 26));
                }
            }
            if (input[f] == ' ' || input[f] == '!' || input[f] == '?' || input[f] == '.' || input[f] == ',') 
            {
                printf("%c", input[f]);
            }
        }
        printf("\n");
        return 0;
    }
}
