#include "../header/glouton.h"

void knapSack(objets sac[] , objets array[], int nbObj, int pMax)
{
    bool tri = false;
    while (tri == false)
    {
        tri = true;
        for (int i = 1; i < nbObj; i++)
        {
            if (array[i].c / array[i].w > array[i - 1].c / array[i - 1].w)
            {
                objets temp = array[i];
                array[i] = array[i - 1];
                array[i - 1] = temp;
                tri = false;
            }
        }
    }
    bool sacRempli = false;
    int p = 0;
    int j = 0;
    while (sacRempli == false)
    {
        if (p + array[j].w <pMax)
        {
            sac[j] = array[j];
            p = p + array[j].w ;
            j++;
        }
        else
        {
            sacRempli = true;
        }
        
    }
}