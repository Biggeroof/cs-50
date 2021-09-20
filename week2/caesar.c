#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<cs50.h>


int main (int argc, char* argv[])
{
    int shift;
    int len;
    int ascii;
    //check condition and assignment of cipher
    if (argc == 2 && atoi(argv[1]) != 0)
    {
        shift = atoi(argv[1]);
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    //grabs text
    string text = get_string("text: ");
    len = strlen(text);
    char cipher[strlen(text)];
    //encryption loop
    for(int i = 0; i < len; i++)
    {
        if(isalpha(text[i]))
        {
            if(islower(text[i]))
            {
                ascii = text[i];
                ascii += shift;

                if (ascii > 122)
                {
                    ascii = (97 + ascii - 122) - 1;
                }
                printf("%d\n", text[i]);
            }
            else if(isupper(text[i]))
            {
                ascii = text[i];
                ascii += shift;

                if (ascii > 90)
                {
                    ascii = (65 + ascii - 90) - 1;
                }
                printf("%d\n", text[i]);
            }
            cipher[i] = ascii;
        }
        else{
            cipher[i] = text[i];
        }

    }
    printf("ciphertext: ");
    for(int i = 0; i < strlen(text); i ++)
    {
        printf("%c", cipher[i]);
    }
    printf("\n");
}

