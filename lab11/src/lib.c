/**
 * file lib.c
 * @brief Файл з реалізацією добутку двох матриць. 
 * @author Kurinna E.
 * @date 11-apr-2022
 * version 1.2
 **/

#include "lib.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int multy_matrix(int **array1, int **array2, int **array3, int rows1, int rows2, int columns2)
{
	for (int i = 0; i < rows1; i++) {
	printf("\n");
	for (int j = 0; j < columns2; j++) {
	*(*(array3 + i) + j) = 0;
	for (int k = 0; k < rows2; k++) {
	*(*(array3 + i) + j) += *(*(array1 + i) + k) * *(*(array2 + k) + j);
	}
	printf("%d ", *(*(array3 + i) + j));
	}
	}


	return **array3;
}
