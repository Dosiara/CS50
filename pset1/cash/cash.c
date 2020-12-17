#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
float change;
int quarters=0;
int dimes=0;
int nickels=0;
int pennies=0;

do
    {
    change=get_float("What's the change?\n");
    }
while(change<=0);
int change_int=round(change*100);

while(change_int>=25)
{
    change_int-=25;
    quarters++;
}
while(change_int>=10)
{
    change_int-=10;
    dimes++;
}
while(change_int>=5)
{
    change_int-=5;
    nickels++;
}    
while(change_int>=1)
{
    change_int--;
    pennies++;
}    
printf("%i\n",pennies+nickels+dimes+quarters);
}