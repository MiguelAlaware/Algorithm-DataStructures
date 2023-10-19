#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateRandoms(int lower, int upper, int count)
{
    int randint;
    for (int i = 0; i < count; i++)
    {
        int randint = (rand() % (upper - lower + 1)) + lower;
        printf("%d\n", randint);
    }
}



int main()
{
    int lower = 0, upper = 9, count = 1;
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int array_size = sizeof(array) / sizeof(int);

    srand(time(0));

    for (int number = 0; number < array_size; number++)
    {
       generateRandoms(0, 10, 5);
    }


    
    return 1;
}

