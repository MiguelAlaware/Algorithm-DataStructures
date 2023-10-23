#include <stdio.h>
#include <math.h>

int search(int *array, int low, int high, int ne)
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
    return 1;
}

int main()
{
    search();
}