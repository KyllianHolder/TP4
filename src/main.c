#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>
#include "../header/divideNconquer.h"
#include "../header/glouton.h"

void testDivideNConquer(int tableau[], int size_t)
{
	int valueTest = 89;
	printf("Valeur a chercher : %d \n", valueTest);
	int test = find_by_dichotomy(tableau, size_t, valueTest);
	printf("%d \n", test);
	assert(find_by_dichotomy(tableau, size_t, valueTest) == -1);
	valueTest = 84;
	printf("Valeur a chercher : %d \n", valueTest);
	test = find_by_dichotomy(tableau, size_t, valueTest);
	printf("%d \n", test);
	assert(find_by_dichotomy(tableau, size_t, valueTest) == 9);
	valueTest = 12;
	printf("Valeur a chercher : %d \n", valueTest);
	test = find_by_dichotomy(tableau, size_t, valueTest);
	printf("%d \n", test);
	assert(find_by_dichotomy(tableau, size_t, valueTest) == 2);
}

int main()
{
	//Divide and conquer
	int size_t = 10;
	int tableau[size_t];
	srand(56);
	tableau[0] = rand() / 100000000;
	for (int i = 1; i < size_t; i++)
	{

		tableau[i] = tableau[i - 1] + rand() / 100000000;
	}
	for (int j = 0; j < 10; j++)
	{
		printf("%d ", tableau[j]);
	}
	printf("\n");
	testDivideNConquer(tableau, size_t);

	//algorithme glouton
	objets objet1 = {7 , 6};
	objets objet2 = {5 , 5};
	objets objet3 = {5, 5};

	objets tabObjet[3] = {objet1, objet2 , objet3};
	objets sac[3];
	knapSack(sac ,tabObjet, 3, 10);
	for (int k = 0; k < 3; k++)
	{
		printf("%f ", sac[k].w);
	}
	
	objet1.c = 2;
	objet1.w = 6;
	objet2.c = 8;
	objet2.w = 7;
	objet3.c = 3;
	objet3.w = 2;

	objets tabObjet2[3] = {objet1, objet2 , objet3};
	objets sac2[3];
	knapSack(sac2 ,tabObjet2, 3, 15);
	printf("deuxieme test : \n");
	for (int l = 0; l < 3; l++)
	{
		printf("%f ", sac2[l].w);
	}

	
	return (0);
}