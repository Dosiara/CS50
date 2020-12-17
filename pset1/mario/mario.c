#include <stdio.h>
#include <cs50.h>

int main(void)
{
//promt height
int height;
do
    {
    height=get_int("Height?\n");
    }
while (height<1||height>8);

//print pyramid
for (int row=0;row<height;row++)
    {
        for (int dots=height-row;dots>1;dots--)
            {
                printf(" ");
            }
        for (int number=0;number<=row;number++)
            {
            printf("#");
            }
        printf("  ");
        for (int number=0;number<=row;number++)
            {
            printf("#");
            }
    printf("\n");
    }
}