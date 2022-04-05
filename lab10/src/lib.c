/**
 * file lib.c
 * @brief Файл з реалізацією функції із завданням визначити найбільшої суми непреривного інтервалу позитивних чисел. 
 * @author Kurinna E.
 * @date 5-apr-2022
 * version 1.2
 **/

#include "lib.h"
//#include <time.h>
//#include <stdio.h>
//#include <stdlib.h>
#include <malloc.h>
int find_maximum(int *array1, int n)
{
	int sum;
	int sum1 = 0;
	int indexp = 0;
	int result = 0;
	for (int i = 0; i < n; i++) {
		if (*(array1 + i) > 0) { //перевірка на позитивні числа
			sum = (*(array1 + i));
			sum1 = sum1 + (*(array1 + i)); // плюсуємо додатні числа в перемінну sum
			indexp++;
		} else {
			sum1 = 0; //якщо негативне число, то обнуляємо  перемінні
			indexp = 0;
		}
		if (result < sum1) { //якщо сума менше, від попереднього результату, то в результат записуємо перемінну sum1
			result = sum1;
		}
	}
	//free(array1);
	return result;
}
