// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	float array[13];
	for (int i = 0;i < 13;i++) {
		scanf_s("%f",&array[i]);
	}
	int positionmin = 0;
	int positionmax=0;
	float min = array[0];
	float max = array[0];
	for (int i = 1;i < 13;i++) {
		if (array[i] > max) {
			max = array[i];
			positionmax = i;
		}
		if (array[i] < min) {
			min = array[i];
			positionmin = i;
		}
	}
	printf("MIN=: %f\n", min);
	printf("Pozycja MIN=: %d\n", positionmin);
	printf("MAX=: %f\n", max);
	printf("Pozycja MAX=: %d\n", positionmax);

    return 0;
}

