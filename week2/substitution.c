#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<cs50.h>

int main(int argc, char *argv[])
{
    string cipherKey;
    int len;
    int alphabet;
    int sum = 0;
    //check condition and assignment of cipher
    if (argc == 2 && strlen(argv[1]) == 26)
    {
        cipherKey = argv[1];
        for (int i = 0; i < 26; i++)
        {
            cipherKey[i] = toupper(cipherKey[i]);
        }
        for (int i = 0; i < 26; i++)
        {
            // checks for invalid inputs
            if (cipherKey[i] >= 65 && cipherKey[i] <= 90)
            {}
            else
            {
                printf("invalid input\n");
                return 1;
            }
        }
        //checks for duplicates
        for (int s = 0; s < 26; s++)
        {
            sum += cipherKey[s];
        }
        if (sum == 2015) {}
        else
        {
            printf("invalid input\n");
            printf("%d \n", sum);
            return 1;
        }
    }
    else if (argc == 2 && strlen(argv[1]) < 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    else
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    //grabs text
    string text = get_string("text: ");
    len = strlen(text);
    char cipher[strlen(text)];

    //encryption loop
    for (int i = 0; i < len; i++)
    {
        if (isalpha(text[i]))
        {
            if (islower(text[i]))
            {
                //finds alphabet position of letter and replaces it with the cipher
                alphabet = text[i] - 97;
                cipher[i] = cipherKey[alphabet];
                cipher[i] = tolower(cipher[i]);
            }
            else if (isupper(text[i]))
            {
                //same as above comment but for lowercase
                alphabet = text[i] - 65;
                cipher[i] = cipherKey[alphabet];
                cipher[i] = toupper(cipher[i]);
            }
        }
        //condition for if current iteration is not part of aplhabet
        else
        {
            cipher[i] = text[i];
        }
    }
    //prints ciphertext
    printf("ciphertext: ");
    for (int i = 0; i < strlen(text); i ++)
    {
        printf("%c", cipher[i]);
    }
    printf("\n");
}