//guass the number game made by : Dhrumil Patel
//hello guys
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guass, nguass = 1;
    srand(time(0));
    number = rand() % 100 + 1;

    do
    {
        printf("guess the number\n");
        scanf("%d", &guass);
        if (number < guass)
        {
            printf("Lower number please !\n");
        }
        else if (number > guass)
        {
            printf("Please enter big number\n");
        }
        else
        {
            printf("congratulations you guassed correctly <<<<<<good job>>>>>>\n");
            printf("you guassed in %d atttempts\n", nguass);
        }
        nguass++;
    } while (guass != number);

    return 0;
}