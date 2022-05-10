/**
 * @mainpage
 * # Загальне завдання
 * **Сформувати** функції, які зчитують і записують дані з файлу, знаходять за певним критерієм і сортирують, добавляють і видaляють об'єкт
 *  @author Kurinna E.
 *  @date 3-May-2022
 *  @version 2.2
 **/

/** 
 *
 * @file main.c
 *  
 * @brief Файл з демонстрацією роботи {@find_train}, {@scan_structure}, {@print_structure}, {@print_print}, {@sorting_train}, {@add_at_the_end}, {@delete_object}
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
 * - у функцію {@sorting_train} передається структура і перемінна size  
 *   
 * - у функцію {@add_at_the_end} передається структура і перемінна size2
 *
 * - у функцію {@delete_object} передається структура і перемінна size3        
 * @return успішний код повернення з програми (0)
 **/

#include <stdio.h>
#include "entity.h"
#include "list.h"
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
int main()
{	int i = 0;
	int size = 5;
	int size1 = 30;
	int size2 = 6;
	//виводимо дані про автора
	printf("Автор: Курінна Єлизавета Ігорівна КН-921г. Лабораторная работа №14."
	"Робота з структурами");
	printf("\n");
	FILE *output = NULL;
	FILE *input = NULL;
	struct Train *trains = (struct Train*)malloc(size * sizeof(struct Train));
	for( i = 0; i < size; i++){
	(trains + i)->fix = (int*)malloc(size1 * sizeof(int));
	(trains + i)->number = (char*)malloc(size1 * sizeof(char));
	(trains + i)->count = (int*)malloc(size1 * sizeof(int));

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
	int size3;
	printf("Номер потяга, який хочете видалити ");
	scanf("%d", &size3);
	struct Train *delete_objec = delete_object(trains, size3);

	int yesno;
	printf("Хочете додати ще один потяг? 0 - ні , 1 - так \n");
	scanf("%d", &yesno);
	if(yesno == 0){ return 0;}

	struct Train *add = add_at_the_end(trains, size2);
	


	free(trains);
	
	return 0;}
	

