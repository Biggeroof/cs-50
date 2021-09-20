#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int letter(string input);
int word(string input);
int sentence(string input);
int grade(int letter, int word, int sentence);

int main(void)
{
    string text = get_string("Text: ");
    int letters = letter(text);
    int words = word(text);
    int sentences = sentence(text);
    int lvl = grade(letters, words, sentences);

    if(lvl > 0 && lvl < 16)
    {
       printf("Grade %i\n", lvl);
    }
    else if(lvl >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Before Grade 1\n");
    }

}

int letter(string input)
{
    string sentence = input;
    int count = 0;
    int length = strlen(sentence);

    for(int i = 0; i < length; i++)
    {
        if((int)(sentence[i] >=65 && sentence[i] <= 90) || (int)(sentence[i] >=97 && sentence[i] <= 122))
        {
            count++;
        }
        else
        {
        }
    }
    return count;
}

int word(string input)
{
    string sentence = input;
    int count = 0;
    int length = strlen(sentence);

    for(int i = 0; i < length; i++)
    {
        if((int)sentence[i] == 32)
        {
            count++;
        }
        else
        {
        }
    }
    return count + 1;
}

int sentence(string input)
{
    string sentence = input;
    int count = 0;
    int length = strlen(sentence);

    for(int i = 0; i < length; i++)
    {
        if(((int)sentence[i] == 46) || ((int)sentence[i] == 33))
        {
            count++;
        }
        else if((int)sentence[i] == 63)
        {
            count++;
        }
        else
        {
        }
    }
    return count;
}

int grade(int letter, int word, int sentence)
{
    int let = letter;
    int wor = word;
    int sent = sentence;

    float l = (let * 100.0) / word;
    float s = (sent * 100.0) / word;
    float index = 0.0588 * l - 0.296 * s - 15.8;

    return round(index);
}