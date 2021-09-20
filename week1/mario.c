#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int height;
    int count = 2;
    while (true)
    {
        //asks user for height
        printf("Height: ");
        scanf(" %i", &height);
        if (height > 0 && height < 9)
        {
            break;
        }
        else
        {
        }
    }
    //loop to control row count
    for (int rows = height; rows > 0; rows--)
    {
        //loop to print out spaces
        for(int spaces = rows - 2; spaces >= 0; spaces--){
                printf(" ");
        }
        //loop to print out hastags
        for (int hashtag = 0; hashtag != count;)
        {
            printf("#");
            hashtag++;
            //checks to see if double spaces need to be inserted
            if (hashtag == count / 2)
            {
                printf("  ");
            }
            else
            {
            }
        }
        //printing newline
        printf("\n");
        count += 2;
    }

}