#include <stdio.h>
#include <math.h>

int main(void){

	//declaring the data type of the variables to be used
	double y=1, sqrt;		//since an initial guess is required, we set the 1st value/element of y to 1 	
	float tol = 0.00001;
	int x, cond = 1; 		//cond will be used for the condition in loop

	printf ("\nEnter a positive integer:" );
	scanf ("%d", &x);		//store the user's input in the variable x

	/*the loop will keep on repeating as
	long as the condition is satisfied*/
	while(cond==1) {
		sqrt = ((y + (x/y))/2);		//the given formula

		/*verifies if the absolute value of the next guess minus y, 
		is less than the tolerance value*/
		if (fabs (y-sqrt) < (tol * y)){
			cond += 1; 	//breaks the loop
		}
		
		y = sqrt;		//updates the value of y with the value of sqrt
	}


	printf("\nThe final approximation of the squareroot is %.5f\n", sqrt);

	return 0;

}