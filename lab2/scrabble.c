#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// создаём массив цены букв
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// шаблон функции расчёта очков
int compute_score(string word);

int main(void)
{
    string word1 = get_string("Player 1: \n");
    string word2 = get_string("Player 2: \n");
       
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);
        
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    if (score1<score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int score;
int compute_score(string word)
{
    score=0;
    for (int i=0; i<strlen(word); i++)
    {
        char char1=toupper(word[i]);
        score+=POINTS[char1-65];
    }
    return score;
}