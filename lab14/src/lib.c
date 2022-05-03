/**
 * file lib.c
 * @brief Файл з читанням, записом, знаходження чогось і сортуванням
 * @author Kurinna E.
 * @date 3-May-2022
 * version 1.2
 **/

#include "lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>





void scan_structure(FILE *input, struct Train *trains, int size){
//	FILE *input;
        //прописуємо шлях ДО файлу
	char* file = (char*)malloc(100 * sizeof(char));
	strcpy(file, "/home/eliza/programing-kurinna/lab14/assets/");
	//прописуємо шлях до файлу разом з цим файлом
	char *inputp = (char*)malloc(100 * sizeof(char));
	strcpy(inputp, "/home/eliza/programing-kurinna/lab14/assets/");
	strcat(inputp, "input.txt");
	//строка в яку можна ввести назву файлу
	char *newin = (char*)malloc(100 * sizeof(char));
	printf("\n Введіть назву файлу, з якого зчитати дані (.txt) : \n");
	scanf("%s", newin);
	strcat(newin, ".txt");
	strcat(file, newin);
	//перевірка
	if((input = fopen(inputp, "r")) == NULL)
	{printf("Такого файлу не знайдено");
	//відкриваємо файл для читання                                                         
	input = fopen(inputp, "r");}
	for(int i = 0; i < size; i++){
	fscanf(input, "%d", &trains[i].fix);
	fscanf(input, "%s", trains[i].number);
	fscanf(input, "%d", &trains[i].count);
	fscanf(input, "%s", trains[i].start_end.start);
	fscanf(input, "%s", trains[i].start_end.end);
	fscanf(input, "%s", trains[i].type);}
	fclose(input);}


void print_structure(FILE *output, struct Train *trains, int size){
//	FILE *output;
	//прописуємо шлях ДО папки, де знаходиться файл//
	char* file1 = (char*)malloc(100 * sizeof(char));
	strcpy(file1, "/home/eliza/programing-kurinna/lab14/assets/");
	//прописуємо шлях до файлу разом з цим файлом//
	char *outputp = (char*)malloc(100 * sizeof(char));
	strcpy(outputp, "/home/eliza/programing-kurinna/lab14/assets/");
	strcat(outputp, "output.txt");
	//строка в яку можна буде вписати назву файлу в який буде записано результат//
	char *newout = (char*)malloc(100 * sizeof(char));
	printf("\n Введіть назву файлу, в який хочете записати результат: (.txt) : \n");
	//scanfile(newout, file1);
	scanf("%s", newout);
	strcat(newout, ".txt");
	strcat(file1, newout);
   	//перевырка//
	if((output = fopen(outputp, "w")) == NULL)
	{printf("Файл було не знайденo"); }                                                                                                    //відкриття файлу для запису                                                                                                         
	output = fopen(outputp, "w");
	//зміна назви файлу //                                                                                                                
	int result = rename(outputp, file1);
	if(result == 0) {
	printf("\n Назва файлу в який буде передано результат  %s\n", file1);}

	for(int i =0; i < size; i++){
	fprintf(output, "%d ", trains[i].fix);
	fprintf(output, "%s ", trains[i].number);
	fprintf(output, "%d ", trains[i].count);
	fprintf(output, "%s ", trains[i].start_end.start);
	fprintf(output, "%s ", trains[i].start_end.end);
	fprintf(output, "%s ", trains[i].type);
	fprintf(output, "\n");}
	fclose(output);}


void print_print(struct Train *trains, int size, int i){
	for(int i =0; i < size; i++){
	printf("Дані про ремонт: %d, Номер потягу: %s, Кількість вагонів: %d, Початковий маршрут: %s, Кінцевий маршрут: %s, Тип потягу: %s ", trains[i].fix, trains[i].number, trains[i].count, trains[i].start_end.start, trains[i].start_end.end, trains[i].type);
	printf("\n");}}


	int size1 = 30;
struct Train *find_train(struct Train* trains, int size){
	struct Train *Ms = (struct Train*)malloc(size * sizeof(struct Train));
	for(int i = 0; i < size; i++){
	(Ms + i)->number = (char*)malloc(size1 * sizeof(char));
	(Ms + i)->start_end.start = (char*)malloc(size1 * sizeof(char));
	(Ms + i)->start_end.end = (char*)malloc(size1 * sizeof(char));
	(Ms + i)->type = (char*)malloc(size1 * sizeof(char));}
	
	int count;
	int number;
	number = 0;
	for(int i = 0; i < size; i++){
	if( (trains[i].fix == 1) && (trains[i].count > 10)){ 
	count = i;
	number++;
	for(int i = 0; i< number; i++){
	Ms[i].fix = trains[count].fix;
	Ms[i].number = trains[count].number;
	Ms[i].count = trains[count].count;
	Ms[i].start_end.start = trains[count].start_end.start;
	Ms[i].start_end.end = trains[count].start_end.end;
	Ms[i].type = trains[count].type;}
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
