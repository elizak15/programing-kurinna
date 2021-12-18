/**
 * @mainpage
 * # Загальне завдання
 * 1. **Сформувати** функцію, що визначає чи є число простим за допомогою циклу while;
 *
 * 2. **Сформувати** функцію, яка буде виконувати множення матриціж
 *
 * @author Kurinna E.
 * @date 18-dec-2021
 * @version 1.0
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи - визначення чи є число простим та множення матриці.
 *
 * @author Kurinna E.
 * @date 18-dec-2021
 * @version 1.0
 */



#include <stdio.h>
#include <stdlib.h>
int truefalse_while(int n, int i);
void matrix(int n1, int array[n1][n1], int array2[n1][n1]); 
/** 
 * Головна функція.
 *
 * Послідовність дій:
 * - задання вхідних даних, якщо дані не передались - у цьому випадку вони матимуть значення за замовчуванням
 * - створення масиву за допомогою генератора псевдовипадкових чисел
 * - вивід в перемінну while1  значення  чи є число простим за допомогою функції 
 *   {@truefalse_while}
 * - вивід даних масива після множення за допомогою функції 
 *   {@matrix}
 * @return успішний код повернення з програми (0)
 */    
int main(){
	int while1;
	const int n3 = 3;
	int n = 7;
	printf("Input your number:");
	scanf("%d", &n);
	int array[n3][n3];
	int array2[n3][n3];
       	for(int i = 0; i < n3; i++){
	for(int j= 0;j<n3; j++){
	array[i][j] = rand()%10;                               

	while1 = truefalse_while( n, 2);
	matrix(n3, array, array2);}}
return 0;}

/**
 * Визначення чи є число простим
 * @param n вхідне число або число за умовчуванням 
 * @param i число лічильника з якого варто почати
 * return повертає значення n=1 => true, n=0 =>false
 */

int truefalse_while(int  n, int i ){
if(n > 1){
	while(i < n){
	if( n % i == 0){
	n = 0;
	}
	i++;}}
if(n != 0){
n = 1;}	
return n;}

/**
 * Функція отримує масив, множить його за правилами матриць та повертає
 * @param n розмір масиву
 * @param array масив, який отримуємо з псквдовипадкових чисел
 * @paran array2 масив, який функція повертає
 */
void matrix(int n,int array[n][n], int array2[n][n]){
for(int i = 0; i < n; i++){		
for(int j = 0; j < n; j++){
	array2[i][j]= 0;
for(int l = 0; l < n; l++){
	array2[i][j] +=  array[i][l]*array[l][j];}}}}


	

