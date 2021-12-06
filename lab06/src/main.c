int main() { /*Given a two-dimensional array of integers. Multiply the matrix by itself(according to the rules of multiplication of matrices)*/
	const int n = 3;
	int array[n][n];
	int array1[n][n];
	for(int i = 0; i < n; i++)
	for(int j= 0;j<n; j++)
		array[i][j] = j + 2; /*set the array
				    array[0][0] =0 + 2 = 2; array[0][1] = 1 + 2 = 3; array[0][2] = 2 + 2 = 4;
				    array[1][0] =0 + 2 = 2; array[1][1] = 1 + 2 = 3; array[1][2] = 2 + 2 = 4;
				    array[2][0] =0 + 2 = 2; array[2][1] = 1 + 2 = 3; array[2][2] = 2 + 2 = 4;*/
	for(int i = 0; i < n; i++)
	for(int j = 0; j < n; j++){
		array1[i][j]= 0;
	for(int l = 0; l < n; l++)
		 array1[i][j] =array1[i][j] +  array[i][l]*array[l][j];} /*
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
	return 0;
}

