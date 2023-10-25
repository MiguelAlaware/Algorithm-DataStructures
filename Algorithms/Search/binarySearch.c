#include <stdio.h>
#include <math.h>

#define SIZEOF(array) sizeof(array) / sizeof(*arr)

int search(int array[], int ne, int high, int low)
{
  
   do { 
        int mid = floor((low + (high - low) / 2));
        int value = array[mid];

        if (value == ne)
        {
            return 0;
        }
        else if (value > mid)
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    } while(low < high); 
    
    return 0;
}

int main()
{
    int neddle = 5;
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int low = 0;
    int high = sizeof(array) / sizeof(array[0]);
    int result = search(array, neddle, high, low);
    printf("%d", result);
}

