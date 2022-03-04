#include <stdio.h>

int main (void){

	//declare the data type of the variables that will be used
	int i, j;	//variables i and j are specified as type int which means they'll hold integer values
	float x, y;	//variables x and y are specified as type float which means they'll hold float values

	//assign values to each variables
	i = 10;		
	j = 20;
	x = 43.2892f;
	y = 5527.0f;

	//prints all the values of the variables 
	printf ("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);  //the four conversion specifications are replaced by the values of the variables i, j, x, and y

}
