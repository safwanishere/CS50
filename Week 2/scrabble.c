#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int scores[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int computeScore(string s);

int main(void)
{
    string str1 = get_string("Player 1: ");
    string str2 = get_string("Player 2: ");

    if (computeScore(str1) > computeScore(str2))
    {
        printf("Player 1 wins!\n");
    }
    else if (computeScore(str1) < computeScore(str2))
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int computeScore(string s)
{
    int score = 0;

    for (int i = 0, length = strlen(s); i<length; i++)
    {
        char c = toupper(s[i]);

        if (c >= 'A' && c <= 'Z')
        {
            score += scores[c - 'A'];
        }
    }

    return score;
}