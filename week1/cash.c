#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
    float change;
    int coins = 0;
    int toAdd;
    while(true){
        printf("Enter amount of change: ");
        scanf("%f", &change);
        if(change > 0)
        {
            break;
        }
        else
        {
        }
    }
    int cents = (round)(change * 100);

    toAdd = cents / 25;
    cents = cents - (toAdd * 25);
    coins += toAdd;

    toAdd = cents / 10;
    cents = cents - (toAdd * 10);
    coins += toAdd;

    toAdd = cents / 5;
    cents = cents - (toAdd * 5);
    coins += toAdd;

    coins += cents;

    printf("%i\n", coins);



}