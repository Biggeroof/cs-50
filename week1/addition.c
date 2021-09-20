#include<stdio.h>

int main(void)
{
    long x;
    long y;
    printf("Enter a number: ");
    scanf("%li", &x);
    printf("Enter another number: ");
    scanf("%li", &y);
    printf("%li + %li = %li\n", x, y, x + y);

}