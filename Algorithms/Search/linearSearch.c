#include <stdio.h>


int main()
{
    int value;
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};    
    int array_size = sizeof(array) / sizeof(int);

    printf("What value do you want to search?\n");
    scanf("%d", &value);

    for (int number = 0; number < array_size; number++)
    {
        if (value == array[number])
        {
            return 0;
        }
    }
    
    return 1;   
}

