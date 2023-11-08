#include <stdio.h>
#include <math.h>

int search(int floors, int criticalFloor)
{
    int low = 1;
    int high = floors;

    do { 

        int mid = floor((low + (high - low) / 2)); 
        
        printf("Current low: %d, Current high: %d\n", low, high);        

        printf("Dropping in floor: %d\n", mid);
        if (mid == criticalFloor)
        {
            return mid; 
        }
        else if (mid < criticalFloor)
        {
            printf("Ball didn't break\n");
            low = mid + 1;
        }
        else
        {
            printf("Ball broke\n");
            high = mid;
        }
    } while (low < high);

    return low;

}

int main()
{
    int floors = 100;
    int criticalFloor = 26;

    int answer = search(floors, criticalFloor);
    printf("The critical floor is %i", answer); 

    return 0;


}