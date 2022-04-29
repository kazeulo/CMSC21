#include <stdio.h>

int main(){

	float grades [5];

	grades [0] = 57;
	printf("Student 1: %.1f\n", grades[0]);

	grades [1] = 85;
	printf("Student 1: %.1f\n", grades[1]);

	grades [2] = 97;
	printf("Student 1: %.1f\n", grades[2]);

	grades [3] = 16;
	printf("Student 1: %.1f\n", grades[3]);

	grades [4] = 82;
	printf("Student 1: %.1f\n", grades[4]);

	printf ("\n Array elements work like typical variables. \n");
	printf ("\n It means that we can perform operations with them. Ex: \n");
	printf ("\n We want to increase grade of Student 1 by 2 points.");

	grades[0] = grades[0]+2;
	printf("\n Updated grade of Student 1: %.1f", grades[0]);



	return 0;
}