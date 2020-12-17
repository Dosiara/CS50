#include <stdio.h>
#include <cs50.h>

//useles function
int main(void)
{
    //get users name
    string name = get_string("What is your name?\n");
    printf("Hello, %s\n", name);
}