#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

{
    long full_card_number = get_long("What's the card number, darling?\n");
    long card_number = full_card_number/10;
    long length_number = full_card_number;
    long double_digits = 0;
    int checksum = 0;
    long single_digits = 0;
    int single_digits_summ = 0;
    int double_digits_summ = 0;
    int length = 0;
    long start_number = full_card_number;
    int tru = 0;
    
    while (length_number>0)
    {
        length++;
        length_number = length_number/10;
    }
    while (start_number/100>1)
    {
        start_number=start_number/10;
    }
    
    while (full_card_number>0)
    {
        single_digits=single_digits*10+full_card_number%10;
        full_card_number=full_card_number/100;
       // printf("Одинарные знаки: %li\n",single_digits);
    }
    
    while(card_number>0)
    {
        double_digits = double_digits*10+card_number%10*2;
        card_number=card_number/100;
       // printf("Двойные знаки: %li\n",double_digits);
    }

    while(single_digits>0)
    {
        single_digits_summ+=single_digits%10;
        single_digits=single_digits/10;
    }
    
    while(double_digits>0)
    {
        double_digits_summ+=double_digits%10;
        double_digits=double_digits/10;
    }
    
    if((double_digits_summ+single_digits_summ)%10==0&&length==15&&start_number==34)
    {
        printf("AMEX\n");   
        tru = 1;
    }
   
    if((double_digits_summ+single_digits_summ)%10==0&&length==15&&start_number==37)
    {
        printf("AMEX\n");    
            tru = 1;
    }
   
    if((double_digits_summ+single_digits_summ)%10==0&&length==16&start_number==51)
    {
        printf("MASTERCARD\n");    
            tru = 1;
    }
    
     if((double_digits_summ+single_digits_summ)%10==0&&length==16&start_number==52)
    {
        printf("MASTERCARD\n");    
           tru = 1;
    }
    
     if((double_digits_summ+single_digits_summ)%10==0&&length==16&start_number==53)
    {
        printf("MASTERCARD\n");    
           tru = 1;
     }
    
     if((double_digits_summ+single_digits_summ)%10==0&&length==16&start_number==54)
    {
        printf("MASTERCARD\n");    
            tru = 1;
    }
   
     if((double_digits_summ+single_digits_summ)%10==0&&length==16&start_number==55)
    {
        printf("MASTERCARD\n");    
            tru = 1;
    }
    
    if((double_digits_summ+single_digits_summ)%10==0&&length==13&start_number/10==4)
    {
        printf("VISA\n");    
            tru = 1;
    }
   
    if((double_digits_summ+single_digits_summ)%10==0&&length==16&start_number/10==4)
    {
        printf("VISA\n");    
            tru = 1;
    }
    
    if(tru==0)
    {
        printf("INVALID\n");
    }

   // printf("%i\n",double_digits_summ+single_digits_summ);
}
