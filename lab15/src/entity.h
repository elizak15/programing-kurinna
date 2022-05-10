#ifndef __LIB1_H__
#define __LIB1_H__
/**
 * @file entity.h
 * @brief Файл з функціями запису і читання
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
							

void scan_structure(FILE *input, struct Train *trains, int size);
void print_structure(FILE *output, struct Train *trains, int size);

	
	
	
	
#endif
