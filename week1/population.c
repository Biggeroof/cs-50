#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start;
    int end;
    int years = 0;
    while(true)
    {
        printf("Start size: ");
        scanf(" %i", &start);
        if(start>=9)
        {
            break;
        }
        else
        {
        }
    }
    while(true)
    {
        printf("End size: ");
        scanf(" %i", &end);
        if(end>=start)
        {
            break;
        }
        else
        {
        }
    }


    while(start < end)
    {
        int dies;
        int born;
        dies = start / 4;
        born = start / 3;
        start += (born-dies);
        years++;
    }
    printf("Years: %d\n", years);
}