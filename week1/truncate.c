#include <stdio.h>

int main(void)
{
    int x;
    int y;

    printf("Enter a number: ");
    scanf("%i", &x);
    printf("Enter another number: ");
    scanf("%i", &y);

    float z = (float)x / (float)y;
    printf("%.2f\n", z);
}