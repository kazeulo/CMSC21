#include <stdio.h>

int main(void){

	int num, first, second, third, rev;

	printf ("Enter a 3-digit number:");
	scanf ("%d", &num);

	//get the first digit by dividing the number by 100
	first = num/100;

	/*get the second digit by dividing the number by 10 and 
	getting the remainder of the qoutient divided by 10*/
	second = (num/10)%10;

	/*get the third digit by getting the remainder of 
	the number divided by 10*/
	third = num%10;

	/*to get the reverse of the number, we multiply the 
	third digit by 100 then multiply the second digit by 
	10 and add the products of the two, along with the 
	first digit*/
	rev = (third*100) + (second*10)+first;

	printf ("Reverse:%d", rev);

	return 0;
}