/**
 * @mainpage
 * # Загальне завдання
 * **Сформувати** функцію, яка знаходить детермінант функції
 *  @author Kurinna E.
 *  @date 17-apr-2022
 *  @version 2.2
 **/

/** 
 *
 * @file main.c
 *  
 * @brief Файл з демонстрацією роботи {@find_determinant}
 *     
 *      
 * @author Kurinna E.
 *   
 * @dare 17-apr-2022
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
 * - зчитання даних з файлу в масив;
 *   
 * - виділення пам'яті під динамічні масиви;
 *           
 * - переведення з одновимірного динамічного масиву в двохвимірний;
 *            
 * - у функцію {@find_determinant} передається масиви array1 і переміннi rows1, columns1, size. 
 *     
 *          
 * @return успішний код повернення з програми (0)
 **/

#include <stdio.h>
#include "lib.h"
#include <malloc.h>
#include <stdlib.h>
int numberCount(FILE* input);
void read_numbers(FILE* input, int size, int*array);
void print_array(int *array, int size);





int find_determinant(int **array1, int rows1, int columns1);
int main()
{	//передаємо дані з текствого файлу input.txt
	FILE *input;
	if ((input = fopen("/home/eliza/programing-kurinna/lab13/assets/input.txt", "r")) == NULL) {
		printf("Error! Opening file\n");
		exit(1);
	}
	//виводимо дані про автора
	printf("Автор: Курінна Єлизавета Ігорівна КН-921г. Лабораторная работа №13."
	       "Робота з файлами");
	printf("\n");
	int rows1, columns1;
	fscanf(input, "%d %d", &rows1, &columns1);
	//виділяємо пам'ять для одномірного динамічного масиву
	int *array = (int*)malloc((rows1 * columns1) * sizeof(int));
	//виділяємо пам'ять для двовимірного динімічного масиву;	
	int **array1 = (int**)malloc((rows1 * columns1) * sizeof(int*));
	for(int i = 0; i < (rows1 * columns1); i++){
	*(array1 + i) = (int*)malloc((rows1 * columns1) * sizeof(int));}
	
	//для того, щоб знати скільки функції потрібно зчитати чисел, виконуємо множення стовпця на рядок, які передалися з файлу ранніше
	int size = rows1 * columns1;
	//функція, яка допомагає зчитати дані з файлу в одновимірний масив
	read_numbers( input,  size, array);
	//функція, яка виводить результуючий масив у який буле передано дані
	print_array(array, size);
	//переводимо одновимірний динамічний масив у двохвимірний
	printf("Двовимірний масив, який був отриманий з даних із файлу input.txt: ");
	printf("\n");
	for(int i = 0; i < rows1; i++){
		int f = i * rows1;
	for(int j = 0; j < columns1; j++){

	*(*(array1 + i) + j) = *((array +f) + j);
	printf("%d ", *(*(array1 + i) + j));
	}	printf("\n");}
	int result = find_determinant(array1, rows1, columns1);
	//printf("\n");
	if(rows1 > 3 && columns1 > 3){
	int det = 0;}
	else {
	printf("Детермінант:  %d", result);}
	free(array);
	free(array1);

	return 0;}
	
	
	void read_numbers(FILE* input, int size, int*array){
	for(int i = 0; i<size; ++i){
	fscanf(input, "%d", array + i);
	}}

	void print_array(int *array, int size){
	printf("Дані, що передалися з файлу в одновимірний масив: ");
	printf("\n");
	for(int i = 0; i < size; ++i){
	printf("%d ; ", *(array+i));
	}
	printf("\n");
	}


