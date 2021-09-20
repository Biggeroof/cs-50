#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <stdlib.h>

int first2Digits(int number)
{
    int local = number;

    while (local >= 100)
    {
        local /= 10;
    }

    return local;
}

string cardType(int number, int length, int digits)
{
    int cardNumber = number;
    int cardLength = length;
    int firstTwo = digits;
    int total = 0;
    int modulo = 100;

    if(length == 15 && (firstTwo >= 34 && firstTwo <= 37))
    {
        for(int i = 0; i < cardLength / 2; i++)
        {
            total += cardNumber % modulo;
            modulo = modulo * 10;
        }
        if(total % 10 == 0)
        {
            return "AMEX";
        }
        else
        {
            return "not amex";
        }
    }
    else
    {
        return "sad";
    }
}

int main(void)
{
    int cardNum;
    int firstTwo;
    int total;

    printf("Enter card number: ");
    scanf("%i", &cardNum);
    int length = floor(log10(cardNum)) + 1;
    printf("%i\n", length);
    firstTwo = first2Digits(cardNum);
    printf("%i\n", firstTwo);

    printf("%s\n", cardType(cardNum, length, firstTwo));

}

