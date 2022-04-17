/**
 * file lib.c
 * @brief Файл з реалізацією знаходження найдовшого і найкоротшого слова в строці 
 * @author Kurinna E.
 * @date 17-apr-2022
 * version 1.2
 **/

#include "lib.h"
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

size_t function_find(char *string, const char *large, const char *small, char **words){
	int i = 0;
	int j = 0;
	int length;
	//перетворюємо за допомогою циклу строку на стовбець, щоб потім легше було шукати найкоротше і найдовше слово
	for( int k = 0; *(string + k) != '\0'; k++){
	if( *(string + k) != ' ' && *(string + k) != '\0'){
	*(*(words + i) + (j++)) = *(string + k);}
	else {
	*(*(words + i) + j) = '\0';
	i++;
	j = 0;}}
	length = i + 1;
	//копіюємо в строки small i large за допомогою функції з бібліотеки <string.h>
	strcpy(small, *(words));
	strcpy(large, *(words));
	//використовуємо цикл, щоб пройтись посимвольно по строці та порахувати за допомогою функції strlen кількість символів та за допомогою команди strcpy скопіювати ці символи в строки small i large, якщо виконується прописала раніше умова
	for(int k = 0; k < length; k++){
	if(strlen(small) > strlen(*(words + k))){
	strcpy(small, *(words + k));}

	if(strlen(large) < strlen(*(words + k))){
	strcpy(large, *(words + k));}}
	//знаходимо розмір вже знайдених найкоротшого і найдовшого слова, і знаходимо наскільки різниця між ними
	int a = strlen(large);
	int b = strlen(small);
	int result = a - b;
	return result;
}



















