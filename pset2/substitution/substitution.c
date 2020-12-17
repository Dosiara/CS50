#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int charcheck(string);

int main(int argc, string argv[])
{

if (argc != 2)
{
    printf("Usage: ./substitution key\n");
    return 1;
}

if (argc == 2 && strlen(argv[1]) < 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

if (charcheck(argv[1]) == 1)
    {
        printf("\nUsage: ./substitution key\n");
        return 1;
    }
    
if (argc == 2)
{
    
    string text = get_string("\nplaintext: ");
        
    for (int i=0; i < strlen(text); i++)
    {
        if (isupper(text[i]) != 0)
        {
        int character = text[i] - 65;
        text[i] = toupper(argv[1][character]);
        }
        
        if (islower(text[i]) != 0)
        {
        int character = text[i] - 97;
        text[i] = tolower(argv[1][character]);
        }
    }
    
printf("\nciphertext: %s\n", text);    
}
}

int charcheck(string key)
{
    for (int i=0; i<strlen(key); i++)
    {
        if (isupper(key[i]) == 0 && islower(key[i]) == 0)
        {
            return 1;
        }
        
        //if (key[i] == key[i+1])
        //int buffer = key[i];
        for (int n=i+1; n<strlen(key); n++)
        {
            if (key[i] == key[n])
            {
            return 1;
            }
        }
    }
    return 0;
}