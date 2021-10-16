/* 
task:
	For a given resistance of three resistirs r1, r2, r3, which are connected in parallel, determine total resistance.


	find total resistance in a parallel circuit: total = 1/r1 + 1/r2 + 1/r3 
 

input data:
	-r1 - the resistance of the first resistor,  float
	-r2 - the resistance of the second resistor,  float
	-r3 - the resistance of the third resistor,  float
 
output data :
        - total resistance, float
 
 */
int main () /* For a given resistance of three resistirs r1, r2, r3, which are connected in parallel, determine total resistance.
                       1. Enter variables and assign them a data type
                       2. Use the formula of the total resistance: total = 1/r1 + 1/r2 + 1/r3
                       3. Rewrite the formula: total = R1 + R2 + R3, where R1 = 1 / r1, R2 = 1 / r2,  R3 = 1 / r3 */
{
	float r1 = 2.5, r2 = 10, r3 = 40, R1, R2, R3, total; 
	R1 = 1 /(float) r1;  /* 1 / 2.5 = 0.4   */
	R2 = 1 /(float) r2;  /* 1 / 10  = 0.1  */
	R3 = 1 /(float) r3;  /* 1 / 40  = 0.025   */
	total = R1 + R2 + R3;  /* find total resistance in a parallel circuit  0.4 + 0.1 + 0.025 = 0.525 */


	return 0;
}
