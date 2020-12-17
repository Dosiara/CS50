#include <stdio.h>
#include <cs50.h>

int main(void)
{

    // TODO: Prompt for start size
    int base_population;
    do
    {
        base_population = get_int("How many llamas do we have for a start?\n");
    }
    while (base_population<9);
    
    // TODO: Prompt for end size
    int desired_population;
    do
    {
    desired_population = get_int("How many llamas are we striving to get?\n");
        
    }
    while (desired_population<=base_population);

    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    do
    {
        base_population=base_population+(base_population/3)-(base_population/4);
        years++;
    }
    while (base_population < desired_population);

    // TODO: Print number of years
    printf("It would roughly take %i years\n",years);
}