#include <stdio.h>

int main (void){

	int n, result, i;

	printf("Enter the exponent/power: ");
	scanf ("%d", &n);

	i = 0;
	result = 1;

	while (i<n){
		result *= 2;
		i += 1;
	}

	printf ("2 to the power of %d is %d", n, result);

	return 0;	
}