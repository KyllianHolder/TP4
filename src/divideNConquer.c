#include "../header/divideNconquer.h"

int find_by_dichotomy(int array[], int size_t, int value)
{
    int mid = size_t / 2;
    int indexMin = 0;
    int indexMax = size_t;
    while (indexMax - indexMin > 1)
    {
        if (array[mid] != value)
        {
            if (array[mid] > value)
            {
                indexMax = mid;
                mid = (indexMax + indexMin) / 2;
            }
            else
            {
                indexMin = mid;
                mid = (indexMax + indexMin) / 2;
            }
        }
        else
        {
            return mid;
        }
    }
    return -1;
}