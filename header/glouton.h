#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct objets objets;
struct objets
{
    float c; //valeur
    float w; //poids
};
/**
 * @author Kyllian Holder
 * @param sac Sac ou stocker les objets
 * @param objets objets a mettre dans le sac
 * @param nbObj nombre d'objets
 * @param pMax poids maximum
 */
void knapSack(objets sac[], objets array[] , int nbObj, int pMax);
