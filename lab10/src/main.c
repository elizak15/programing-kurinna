/**
 * @mainpage
 * # Загальне завдання
 * **Сформувати** функцію, яка знаходить суму безперервну послідовність позитивних чисел у вхідному масиві.
 * @author Kurinna E.
 * @date 5-apr-2022
 * @version 2.2
 */

/** 
 * 
 * @file main.c
 * 
 * @brief Файл з демонстрацією роботи {@find_maximum}
 *
 *
 * @author Kurinna E.
 * 
 * @dare 5-apr-2022
 * 
 * @version 2.2
 */

/**

 * Головна функція 
 *
 *
 * Послідовність дій:
 * 
 * - виділяємо пам'ять для двоx масивів array1 i array2
 * 
 * - в перемінну N вводиться розмір масиву array1
 * 
 * - задаємо масив array1 з позитивних і негативних чисел
 * 
 * - у функцію {@findMaximum} передаэться масив array1 і перемінна N 
 *
 * 
 * @return успішний код повернення з програми (0)
 */

//#include <time.h>
#include "stdio.h"
#include "lib.h"
#include "stdlib.h"
#include <malloc.h>

int main()
{
	int *array1;
	int *array2;
	int maximum_sum;
	const int n = 5;
	const int b = 1;
	array1 = (int *)malloc(n * sizeof(int)); //виділяємо пам'ять

	for (int i = 0; i < n; i++) { // заповняємо масив рандомом, якщо число ділиться на 2, то множимо на -1
		*(array1 + i) = random() % 10;
		if (*(array1 + i) % 2 == 0) {
			*(array1 + i) *= -1;
		}
	}
	//printf("array1[%i] =", i);
	//scanf("%i", array1 + i);}

	array2 = (int *)malloc(b * sizeof(int));

	maximum_sum = find_maximum(array1, n); /*  перемінній @maximum_sum присвоюємо значення, яке повертається після виконання */

	*array2 = maximum_sum; /*присвоюємо найбільшу суму в інший*/

	free(array2); // звільнення пам'ять
	free(array1);
	return 0;
}
