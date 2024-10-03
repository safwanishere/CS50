#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

float avgLetters(string text);
float avgSentences(string text);

int main(void)
{
    string text = get_string("Text: ");

    float L = avgLetters(text);
    float S = avgSentences(text);
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

int getWords(string text)
{
    int wordCounter = 0;

    for (int i = 0, len = strlen(text); i < len; i++){
        char c = text[i];
        if (c == '.' || c == ',' || c == '!' || c == ';' || c == ' ' || c == ':')
        {
            wordCounter++;
            if (c == ' ' && (text[i-1] == ',' || text[i-1] == '.' || text[i-1] == '"' || text[i-1] == ':' || text[i-1] == ';'))
            {
                wordCounter--;
            }
        }
    }

    return wordCounter;
}

float avgLetters(string text)
{
    int letterCounter = 0;

    for (int i = 0, len = strlen(text); i < len; i++)
    {
        char c = toupper(text[i]);
        if (c >= 'A' && c <= 'Z'){
            letterCounter++;
        }
    }

    return (letterCounter*100.0)/getWords(text);
}

float avgSentences(string text)
{
    int sentenceCounter = 0;

    for (int i = 0, len = strlen(text); i < len; i++){
        char c = text[i];
        if (c == '.' || c == '!' || c == '?')
        {
            sentenceCounter++;
        }
    }

    return (sentenceCounter*100.0)/getWords(text);
}
