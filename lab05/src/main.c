int main(){  /*Determine whether the given number is prime
		i = 2, i<7; i = i + 1	
       	        1)2<7; 7 % 2 = 1;
		2)3<7; 7 % 3 = 1;
		3)4<7; 7 % 4 = 3;
		4)5<7; 7 % 5 = 2;
		5)6<7; 7 % 6 = 1;
		n % i != 0 => n =1 => true(7 is prime number)*/
int n = 7;
int i = 2;/*because 1 is divisible by both primes and non-primes*/
if(n > 1){
	while(i < n){
	if(n % i == 0){
		n = 0;} /* 0 => false */
		i ++;}
	if(n != 0){ 
		n = 1;} /* 1 => true */

return 0;}}

/* for loop */

/*
int main(){
int n =7;
if(n>1){
for (int i=2; i<n; i++){
	if ( n % i == 0){ 
        n = 0;}}             // 2 => false //
for (int i = 2; i<n; i++){
        if ( n % i != 0){
        n = 1;}}            // 1 => true //
 
return 0;
}}*/ 


/* do while loop */


/*int main(){
int n = 7;
int i = 2;
if (n > 1){
	do{
	if(n % i == 0){
	n = 0;}
	i++;}
	while (i < n);
	if (n != 0){
	n = 1;}
return 0;}}*/

