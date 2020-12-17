#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{

//Check that program was run with one command-line argument
if (argc != 2)
    {
        printf ("Usage: ./caesar key\n");
        return 1;
    }
if (argc == 2)
{
    
//Iterate over the provided argument to make sure all characters are digits    
for (int i=0; i<strlen(argv[1]); i++)
{
    if (isdigit(argv[1][i]) == 0)
    {
        printf ("Usage: ./caesar key\n");
        return 1;
    }
}

//Convert that command-line argument from a string to an int
int key = atoi(argv[1]);    

//Prompt user for plaintext   
string text = get_string("\nplaintext: ");
    
//Iterate over each character of the plaintext:    
for (int i=0; i < strlen(text); i++)
{
    
//If it is an uppercase letter, rotate it, preserving case, then print out the rotated character
    if (isupper(text[i]) != 0)
    {
        text[i] = (text[i] - 65 + key) % 26 + 65; 
    }
    
//If it is a lowercase letter, rotate it, preserving case, then print out the rotated character
 if (islower(text[i]) != 0)
    {
        text[i] = (text[i] - 97 + key) % 26 + 97; 
    }

//If it is neither, print out the character as is
}

printf("\nciphertext: %s\n", text);
}    
}







//Print a newline