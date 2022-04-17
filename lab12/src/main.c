/**
 * @mainpage
 * # Загальне завдання
 * **Сформувати** функцію, яка знаходить найкоротше і найдовше слово
 * @author Kurinna E.
 * @date 17-apr-2022
 * @version 2.2
 * */

/**
 * @file main.c
 * @brief Файл з реалізацією роботи {@function_find}
 * @author Kurinna E.
 * @data 17-apr-2022
 * @version 2.2
 * */

/**
 * Головна функція
 *
 * Послідовність дій:
 * - виділяємо пам'ять для строк string, large, small, words
 * - в строку string дані вводяться з файлу input.txt
 * - у функцію {@function_find} передаються строки string, large, small, words
 * - @return успішний код повернення з програми(0)
 **/
#include <stdio.h>
#include "lib.h"
#include <malloc.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

int main(){
	//виділяємо пам'ять для строки, якій передамо дані з файлу
	char *string = (char*)malloc(100 * sizeof(char));
	
	//передаємо дані з текствого файлу input.txt
	FILE *fptr;
        if ((fptr = fopen("/home/eliza/programing-kurinna/lab12/assets/input.txt", "r")) == NULL) {
	printf("Error! Opening file\n");
	exit(1);
	               }                                                                //виводимо дані про автора
	                                                                        	printf("Автор: Курінна Єлизавета Ігорівна КН-921г. Лабораторная работа №1."
	"Строки");
											printf("\n"); 
				 							fgets(string, 100, fptr);
	int result;
	//виділяємо пам'ять для срок, які будуть потрібні для функції
	const char *large = (char*)malloc(100 * sizeof(char));

	const char *small = (char*)malloc(100 * sizeof(char));
	

	char **words = (char**)malloc(100 * sizeof(char*));
	for( int p  = 0; p < 100; p++){
	*(words + p) = (char*)malloc(100 * sizeof(char));}
	//функція, яка знаходить найкоротше і найдовше слово, а потів повертає ще й різницю
	function_find(string, large, small, words);
	//виводимо на екран результат робити коду
	printf("The longest word is: %s\n", small);
	printf("The shortest  word is: %s\n", large);
	//printf("%d", result);
	return 0 ;}




