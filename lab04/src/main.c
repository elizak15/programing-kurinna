int main() /*Determine whether the integer is a 6-digit "lucky" ticket ("lucky ticket" - a ticket,in                                             which the sum of the first half of the number numbers is equal to the sum of the second half.                                         For example,ticket number 102300 is lucky, because 1 + 0 + 2 = 3 + 0 + 0*/

{
	int n = 102300;
	int luckyticket; 

	
	int n6 = n  % 10;           /* 102300 % 10     = 0 */
	int n5 = (n / 10)     % 10; /* 102300 / 10     = 10230; 102300 % 10 = 0; */
	int n4 = (n / 100)    % 10; /* 102300 / 100    = 1023;  1023   % 10 = 3; */
	int n3 = (n / 1000)   % 10; /* 102300 / 1000   = 102;   102    % 10 = 2; */
	int n2 = (n / 10000)  % 10; /* 102300 / 10000  = 10;    10     % 10 = 0; */
	int n1 = (n / 100000) % 10; /* 102300 / 100000 = 1;     1      % 10 = 1; */
	int n123 = n1 + n2 + n3;    /* n123 = 1 + 0 + 2;         */
	int n456 = n4 + n5 + n6;    /* n456 = 3 + 0 + 0;         */
	if(n123 == n456)            /* 1 + 0 + 2 = 3 + 0 + 0;    */
	{
		luckyticket = 1;    /* luckyticket = 1 => true;  */
	}
	else 
	{
		luckyticket = 0;    /* luckyticket = 0 => false; */
	}
return 0;
	}	
