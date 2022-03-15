#include <stdio.h>

int main(void){

	int num, first, second, rev;

	printf ("Enter a 2-digit number:");
	scanf ("%d", &num);

	//get the first digit by dividing the number by 10
	first = num/10;

	//get the second digit by getting the remainder
	second = num%10;

	/*to get the reverse of the digits, we multiply
	the second digit with 10 and add the first digit*/
	rev = second*10+first;

	printf ("Reverse:%d", rev);

	return 0;
}
