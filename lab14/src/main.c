/**
 * @mainpage
 * # Загальне завдання
 * **Сформувати** функції, які зчитують і записують дані з файлу, знаходять за певним критерієм і сортирують
 *  @author Kurinna E.
 *  @date 17-apr-2022
 *  @version 2.2
 **/

/** 
 *
 * @file main.c
 *  
 * @brief Файл з демонстрацією роботи {@find_train}, {@scan_structure}, {@print_structure}, {@print_print}, {@sorting_train}
 *     
 *      
 * @author Kurinna E.
 *   
 * @dare 3-May-2022
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
 * - у функцію {@find_train} передається структура і перемінна size
 *
 *   - у функцію {@sorting_train} передається структура і перемінна size  
 *          
 * @return успішний код повернення з програми (0)
 **/

#include <stdio.h>
#include "lib.h"
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
int main()
{	int i = 0;
	int size = 5;
	int size1 = 30;
	//виводимо дані про автора
	printf("Автор: Курінна Єлизавета Ігорівна КН-921г. Лабораторная работа №14."
	"Робота з структурами");
	printf("\n");
	FILE *output = NULL;
	FILE *input = NULL;
	struct Train *trains = (struct Train*)malloc(size * sizeof(struct Train));
	for( i = 0; i < size; i++){
	(trains + i)->number = (char*)malloc(size1 * sizeof(char));
	(trains + i)->start_end.start = (char*)malloc(size1 * sizeof(char));
	(trains + i)->start_end.end = (char*)malloc(size1 * sizeof(char));
	(trains + i)->type = (char*)malloc(size1 * sizeof(char));}
	
	scan_structure(input,trains, size);
	
	print_structure(output, trains, size);
	
	print_print(trains, size, i);
	printf("\nДані про потяги, якi потребують ремонт і мають кількість вагонів більше 10\n");
	struct Train  *ms_p = find_train(trains, size);
	printf("\nСортування за кількістю вагонів:\n");
	struct Train *sort = sorting_train( trains, size);
	free(trains);
	
	return 0;}
	

