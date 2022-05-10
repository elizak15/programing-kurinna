/**
 * file list.c
 * @brief Файл знаходження чогось, сортуванням, видалення і добавлення
 * @author Kurinna E.
 * @date 3-May-2022
 * version 1.2
 **/

#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
int size = 5;
void print_print(struct Train *trains, int size, int i){
	for(int i = 0; i < size; i++){
	printf("Дані про ремонт: %d, Номер потягу: %s, Кількість вагонів: %d, Початковий маршрут: %s, Кінцевий маршрут: %s, Тип потягу: %s ", (trains + i)->fix, (trains + i)->number, (trains + i)->count, (trains + i)->start_end.start, (trains +i)->start_end.end, (trains + i)->type);
	printf("\n");}}


	int size1 = 30;
struct Train *find_train(struct Train* trains, int size){
	struct Train *Ms = (struct Train*)malloc(size * sizeof(struct Train));
	for(int i = 0; i < size; i++){
	(Ms + i)->fix = (int*)malloc(size1 * sizeof(int));
	(Ms + i)->number = (char*)malloc(size1 * sizeof(char));
	(Ms + i)->count = (int*)malloc(size1 * sizeof(int));
	(Ms + i)->start_end.start = (char*)malloc(size1 * sizeof(char));
	(Ms + i)->start_end.end = (char*)malloc(size1 * sizeof(char));
	(Ms + i)->type = (char*)malloc(size1 * sizeof(char));}
	
	int count;
	int number;
	number = 0;
	for(int i = 0; i < size; i++){
	if( ((trains + i)->fix == 1) && ((trains + i)->count > 10)){ 
	count = i;
	number++;
	for(int i = 0; i< number; i++){
	(Ms + i)->fix = (trains + count)->fix;
	(Ms + i)->number = (trains + count)->number;
	(Ms + i)->count = (trains + count)->count;
	(Ms + i)->start_end.start = (trains + count)->start_end.start;
	(Ms + i)->start_end.end = (trains + count)->start_end.end;
	(Ms + i)->type = (trains + count)->type;}
	print_print(Ms, number, count);
	}}
	
	
	return Ms;}

	
struct Train *sorting_train(struct Train* trains, int size){
	struct Train temp;
	for(int i = 0; i < size - 1; i++){
	for(int j = 0; j < size - i - 1; j++){
		if((trains +  j)->count > (trains +( j + 1))->count){
		temp = *(trains +  j );
		*(trains +  j) = *(trains +( j + 1));
		*(trains + (j + 1)) = temp;}}}
print_print(trains, size , 0);
	return trains;}
	int size2 = 6;
struct Train *add_at_the_end(struct Train* trains, int size2){
	struct Train *Mss = (struct Train*)malloc(size2 * sizeof(struct Train));
	for(int i = 0; i < size2; i++){
	(Mss + i)->fix = (int*)malloc(size1 * sizeof(int));
	(Mss + i)->number = (char*)malloc(size1 * sizeof(char));
	(Mss + i)->count = (int*)malloc(size1 * sizeof(int));
	(Mss + i)->start_end.start = (char*)malloc(size1 * sizeof(char));
	(Mss + i)->start_end.end = (char*)malloc(size1 * sizeof(char));
	(Mss + i)->type = (char*)malloc(size1 * sizeof(char));}

	for(int i = 0; i < size2 - 1; i++){
	(Mss + i)->fix =(trains + i)->fix;
	strcpy((Mss + i)->number, (trains + i)->number);
	(Mss + i)->count = (trains + i)->count;
	strcpy((Mss + i)->start_end.start, (trains + i)->start_end.start);
	strcpy((Mss + i)->start_end.end, (trains + i)->start_end.end);
	strcpy((Mss + i)->type, (trains + i)->type);}

	printf("\n Чи потребує потяг № %d ремонту: ", size2);
	scanf("%d", &((Mss + (size2 - 1))->fix));

	printf("\n Номер потягу № %d: ", size2);
	scanf("%s", ((Mss + (size2 - 1))->number));

	printf("\n Кількість вагонів у потягу № %d: ", size2);
	scanf("%d", &((Mss + (size2 - 1))->count));

	printf("\n  Потяг № %d прямує з: ", size2);
	scanf("%s", ((Mss + (size2 - 1))->start_end.start));

	printf("\n  Потяг № %d прямує в: ", size2);
	scanf("%s", ((Mss + (size2 - 1))->start_end.end));

	printf("\n  Тип потягу № %d: ", size2);
	scanf("%s", ((Mss + (size2 - 1))->type));
	print_print(Mss, size2, 0);
	return Mss;}

struct Train *delete_object(struct Train* trains, int size3){
	(trains + size3 - 1)->fix = 0;
	(trains + size3 - 1)->number = " - ";
	(trains + size3 - 1)->count = 0;
	(trains + size3 - 1)->start_end.start = " - ";
	(trains + size2 - 1)->start_end.end = " -  ";
	(trains + size3 - 1)->type = " -  ";
	int k = 0;
	for(int i = 0; i < size3; i++){
	if((trains + i) -> number == " "){
		 k = i;}}
	print_print(trains, size, 0);

	//print_print(trains, size3  , 0);
	return trains;}






