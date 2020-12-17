#include <stdio.h>
#include <cs50.h>
#include <string.h>


float words = 1;
float sentences = 0;
float letters;

int main()
{
   // получаем стринг с предложением
   
    string sentence = get_string("Text: ");
    float length = strlen(sentence);
    letters = length;
  
  // считаем число слов, т.е. пробелов до /0  
  
for (int i=0; i<length; i++)
{
    if (sentence[i] == 32)
    {
        words++;
    }
  
    if (sentence[i] == 33 || sentence[i] == 46 || sentence[i] == 63)
    {
        sentences++;
    }
      
    if (sentence[i] == 32 || sentence[i] == 33 || sentence[i] == 39 || sentence[i] == 44 || sentence[i] == 45 || sentence[i] == 46 || sentence[i] == 59 || sentence[i] == 63)
    {
        letters--;
    }
}

// считаем флоат средней длины слова на 100 букв, т.е. стринг-не_буквы * 100

float word_length = (letters / words) * 100;

// считаем флоат средней длины предложения, т.е. стринг минус точки минус пробелы делим на число точек или !.

float sentence_length = (sentences / words) * 100;

// считаем и выдаём сложность, где 
// index = 0.0588 * L (средняя длина слова на 100 слов) - 0.296 * S (средняя длина придложений на 100 слов) - 15.8

// считаем среднюю длину слова на 100 букв

//printf ("Letters: %f\n", letters);
//printf ("Sentences: %f\n", sentences);
//printf ("Words: %f\n", words);
//printf ("word_length: %f\n", word_length);
//printf ("sentence_length: %f\n", sentence_length);

int grade = round (0.0588 * word_length - 0.296 * sentence_length - 15.8);

if (grade < 1)
{
    printf ("Before Grade 1\n");    
}

if (grade > 16)
{
    printf ("Grade 16+\n");    
}

if (grade >= 1 && grade <= 16)
{
printf ("Grade %i\n", grade);
}

}