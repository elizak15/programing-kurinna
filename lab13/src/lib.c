/**
 * file lib.c
 * @brief Файл з реалізацією визначення детермінанту матриці 
 * @author Kurinna E.
 * @date 18-apr-2022
 * version 1.2
 **/

#include "lib.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int find_determinant(int **array1, int rows1, int columns1){
	int determinant;
	if(rows1 == 2 && columns1 == 2){
	//for(int i = 0; i  < rows1; i++){
	//for(int j = 0; j < columns1; j++){
determinant = (**array1) * (*(*(array1 + 1) + 1)) - (*(*(array1) + 1)) * (*(*(array1 + 1)));}
	int det = 0;
	if(rows1 == 3 && columns1 == 3){
	for(int i = 0; i < 3; i++){
	determinant = *(*(array1)) * ((*(*(array1 + 1)+1)) * (*(*(array1 + 2) + 2)) - ((*(*(array1 + 2)+1))) * ((*(*(array1 + 1)+2)))) - *(*(array1)+1) * ((*(*(array1 + 1)+0)) * (*(*(array1 + 2)+2)) - (*(*(array1 + 2)+0)) * (*(*(array1 + 1)+2))) + (*(*(array1 + 0)+2)) * ((*(*(array1 + 1)+0)) * (*(*(array1 + 2)+1)) - (*(*(array1 + 2)+0)) * (*(*(array1 + 1)+1)));}}	
	if(rows1 > 3 && columns1 > 3){
		printf("Вибачте, ми поки що не можемо вирішити цю задачу...");
			return 0;}
	return determinant;}
















