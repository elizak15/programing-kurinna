/**
 * @mainpage
 * # Загальне завдання
 * **Сформувати** функцію, яка знаходить добуток матриць
 *  @author Kurinna E.
 *  @date 11-apr-2022
 *  @version 2.2
 **/

/** 
 *
 * @file main.c
 *  
 * @brief Файл з демонстрацією роботи {@multy_matrix}
 *     
 *      
 * @author Kurinna E.
 *   
 * @dare 11-apr-2022
 *           
 *  @version 2.2
 **/

/**
 *
 * Головна функція 
 *   
 *    
 * Послідовність дій:
 *     
 * - виділяємо пам'ять для двоx масивів array1, array2 i array3
 *   
 * - в переміннi rows1, columns1, rows2, columns2  вводяться з файлу input.txt
 *           
 * - задаємо масиви array1 i array3 за допомогою рандому 
 *            
 * - у функцію {@multy_matrix} передається масиви array1, array2, array3 і переміннi rows1, rows2, columns2 
 *     
 *          
 * @return успішний код повернення з програми (0)
 **/

#include <stdio.h>
#include "lib.h"
#include <malloc.h>
#include <stdlib.h>

int main()
{	//передаємо дані з текствого файлу input.txt
	FILE *fptr;
	if ((fptr = fopen("/home/eliza/programing-kurinna/lab11/assets/input.txt", "r")) == NULL) {
		printf("Error! Opening file\n");
		exit(1);
	}
	//виводимо дані про автора
	printf("Автор: Курінна Єлизавета Ігорівна КН-921г. Лабораторная работа №11."
	       "Взаємодія з користувачем шляхов введення/ виведення");
	printf("\n");
	int rows1, rows2, columns1, columns2;
	fscanf(fptr, "%d %d %d %d", &rows1, &columns1, &rows2, &columns2);

	int n;
	n = rows1 * columns1;
	//виділяємо пам'ять для першого массиву
	int **array1 = (int **)malloc(n * sizeof(int *));
	for (int i = 0; i < n; i++) {
	*(array1 + i) = (int *)malloc(n * sizeof(int));
	}

	//задаємо масив рандомними числами
	for (int i = 0; i < rows1; i++) {
	printf("\n");
	for (int j = 0; j < columns1; j++) {
	*(*(array1 + i) + j) = random() % 10; //(1000 + 1 - (-1000)) + (-1000);
	
	//виведемо нашу матрицю на екран
	printf("%d ", *(*(array1 + i) + j));
	}
	}
	printf("\n");
	
	//задаємо другу матрицю, виділяємо пам'ять
	int n2;
	n2 = rows2 * columns2;
	int **array2 = (int **)malloc(n2 * sizeof(int *));
	for (int i = 0; i < n2; i++) {
	*(array2 + i) = (int *)malloc(n2 * sizeof(int));
	}
	
	//задаємо значення матриці за допомогою рандому
	for (int i = 0; i < rows2; i++) {
	printf("\n");
	for (int j = 0; j < columns2; j++) {
	*(*(array2 + i) + j) = random() % 10;
	printf("%d ", *(*(array2 + i) + j));
	}
	}
	printf("\n");
	
	//задаємо результуючий масив та виділяємо пам'ять для нього
	int n3;
	n3 = rows1 * columns2;
	int **array3 = (int **)malloc(n3 * sizeof(int *));
	for (int i = 0; i < n3; i++) {
	*(array3 + i) = (int *)malloc(n3 * sizeof(int));
	}
	
	//перевіряємо, щоб число стовпців в першому співмножнику дорівнювало числу рядків другому
	if (columns1 != rows2) {
		printf("Число стовпців в першому співмножнику не дорівнює числу рядків другому, тому множення неможливе.");
		return 0;
	}
	
	//функція, яка повертає масив array3
	multy_matrix(array1, array2, array3, rows1, rows2, columns2);
	return 0;
}


