#include <stdio.h>

int main(void){

	//declare the data type of the variables that will be used.
	//in this case here, all variables are specified as type int which means they'll hold integer values
	int num1, denom1, num2, denom2, result_num, result_denom;

	//asks the user to enter a fraction number
	printf ("Enter first fraction: ");
	scanf ("%d/%d", &num1, &denom1); 	//user's inputs will be stored into variables 'num1' and 'denom1'

	//asks the user to enter another fraction number
	printf ("Enter second fraction: ");
	scanf ("%d/%d", &num2, &denom2);	//user's inputs will be stored into variables 'num2' and 'denom2' 

	//formulas in order to get the sum of the two fractions entered by the user
	result_num = num1 * denom2 + num2 * denom1;		//stores the answer into variable 'result_num'
	result_denom = denom1 * denom2;		  //multiplies the two denominators and stores the product into variable 'result_denom'

	//prints the final sum of the two fractions
	printf ("The sum is %d/%d\n", result_num, result_denom);

	return 0;

}
