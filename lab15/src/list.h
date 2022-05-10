#ifndef __LIB1_H__
#define __LIB1_H__
/**
 * @file list.h
 * @brief Файл з функціями пошуку чогось, сортування структури, видалення і добавлення об'єкта
 * @author Kurinna E.
 * @date 3-May-2022
 * @version 1.3
 **/

/** Знаходження деяких полів
 *  @param struct Train trains структура
 *  @param size кількість поїздів
 *  return повертає структуру Ms.
 *  */
/**Сортування за певним полем
 *  @param struct Train trains структура
 *  @param size кількість поїздів
 *  return повертає структуру trains.
 **/
/**
 * *Добавлення об'єкта в кінець структури
 * @param struct Train trains
 * @param size2
 * return trains
 **/
/**
 * Видалення обʼєкта за індексом
 * @param struct Train trains
 * @param size3
 * return trains
 **/

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>

struct Train {
	        int fix;
		char *number;
		int count;

		struct Way {
		char *start;
		char *end;
		}start_end;
		char *type;
		}t;
							

void print_print(struct Train *trains, int size, int i);
struct Train *find_train(struct Train* trains, int size);
struct Train *sorting_train(struct Train* trains, int size);
struct Train *add_at_the_end(struct Train* trains, int size2);
struct Train *delete_object(struct Train* trains, int size3);

	
	
	
	
#endif
