#include <stdio.h>
#include <stdlib.h>
int truefalse_while(int n, int i);
int truefalse_for(int n, int i);
int truefalse_dowhile(int n, int i);/*
		i = 2, i<7; i = i + 1	
       	        1)2<7; 7 % 2 = 1;
		2)3<7; 7 % 3 = 1;
		3)4<7; 7 % 4 = 3;
		4)5<7; 7 % 5 = 2;
		5)6<7; 7 % 6 = 1;
		n % i != 0 => n =1 => true(7 is prime number)*/
void matrix(int n1, int array[n1][n1], int array2[n1][n1]); 
int main(){  /*Rework the programs that were developed during the laboratory work on the topic
	       “Arrays” and “Loops” so that the functions are used to calculate the result.
		Determine whether the given number is prime
	      Given a two-dimensional array of integers. Multiply the matrix by itself(according to the rules of multiplication of matrices)*/

	int while1;
	int for1;
	int dowhile1;
	const int n3 = 3;
	int n = 7;
	printf("Input your number:");
	scanf("%d", &n);
	int array1[n3][n3];
	int array[n3][n3];
	int array2[n3][n3];
       	for(int i = 0; i < n3; i++){
	for(int j= 0;j<n3; j++){
	array[i][j] = rand()%10;                               
	/*set the array
													
	  
	array[0][0] =0 + 2 = 2; array[0][1] = 1 + 2 = 3; array[0][2] = 2 + 2 = 4;
													
	array[1][0] =0 + 2 = 2; array[1][1] = 1 + 2 = 3; array[1][2] = 2 + 2 = 4;														                                                                                    array[2][0] =0 + 2 = 2; array[2][1] = 1 + 2 = 3; array[2][2] = 2 + 2 = 4;*/


	while1 =truefalse_while( n, 2);
	for1   =truefalse_for(n,2);
	dowhile1=truefalse_dowhile(n,2);
	matrix(n3, array, array2);}}
	printf("%d", while1);
	printf("%d", for1);
	printf("%d", dowhile1);
return 0;}


 /* i = 2, i<7; i = i + 1   
 1)2<7; 7 % 2 = 1;
 2)3<7; 7 % 3 = 1;
 3)4<7; 7 % 4 = 3;
 4)5<7; 7 % 5 = 2;
 5)6<7; 7 % 6 = 1;
 n % i != 0 => n =1 => true(7 is prime number)*/

int truefalse_while(int  n, int i ){
if(n > 1){
	while(i < n){
	if( n % i == 0){
	n = 0;}
	i++;}
if(n != 0){
	n = 1;}}	

return n;}

int truefalse_for(int n, int i){
	for(int i =2; i<n; i++){
		if(n % i == 0){
		n = 0;}}
	for(int i =2; i<n; i++){
		if(n % i != 0){
		n = 1;}}
return n;}

int truefalse_dowhile(int n, int i){
if (n>1){
	do{
	if(n % i == 0){
	n = 0;}
	i++;}
	while(i < n);
	if (n != 0){
		n = 1;}}
return n;}
	void matrix(int n,int array[n][n], int array2[n][n]){
		for(int i = 0; i < n; i++){
		
	for(int j = 0; j < n; j++){
	array2[i][j]= 0;
	
	for(int l = 0; l < n; l++){
	array2[i][j] +=  array[i][l]*array[l][j];}}}}

	/*
 array[0][0] = 2; array[0][1] =  3; array[0][2] = 4;
 array[1][0] = 2; array[1][1] = 3;  array[1][2] = 4;                                                                                   array[2][0] = 2; array[2][1] = 3; array[2][2] =  4;
  
 array[0][0] = 2; array[0][1] = 3;  array[0][2] = 4;
 array[1][0] = 2; array[1][1] = 3;  array[1][2] = 4;				                                                       array[2][0] = 2; array[2][1] = 3;  array[2][2] = 4;
1) i = 0; j = 0; l = 0; => array[0][0] = array[0][0] + array[0][0] * array[0][0] = 0 + 2 * 2 = 4
   i = 0; j = 0; l = 1; => array[0][0] = array[0][0] + array[0][1] * array[1][0] = 4 + 3 * 2 = 10
   i = 0; j = 0; l = 2; => array[0][0]= array[0][0] + array[0][2] * array[2][0] = 10 + 4 * 2 = 18;
2) i = 0; j = 1; l = 0; => array[0][1] = array[0][1] + array[0][0] * array[0][1] = 0 + 2* 3 = 6;
   i = 0; j = 1;  l = 1; => array[0][1] = array[0][1] + array[0][1] * array[1][1] = 6 + 3 * 3 = 15;
   i = 0; j = 1; l = 2; => array[0][1] = array[0][1] + arrray[0][2] * array[2][1] = 15 + 4 * 3 = 27;
3) i = 0; j = 2; l = 0; => array[0][2] = array[0][2] + array[0][0] * array[0][2] = 0 + 2 * 4 = 8;
   i = 0; j = 2; l = 1; => array[0[[2] = array[0][2] + array[0][1] * array[1][2] = 8 + 3 * 4 = 20;
   i = 0; j = 2; l = 2; => array[0][2] = array[0][2] + array[0][2] * array[2][2] = 20 + 4 * 4 = 36;   =>[0][0] = 18; [0][1] = 27; [0][2] = 36 etc*/ 
	

