#include <stdio.h>

int main (void){

	int a=2, b=3;

	/*else statements will not run since the value of a
	is already set to 2, which means that the if statement
	in the nested if is already satisfied.*/

	printf ("For letter a\n");

	if (b==3){

		if (a==2){
			printf("*****\n");
		}

		else {
			printf("-----\n");
		}

		printf(">>>>>\n"); 
		printf("<<<<<\n");

	}

	printf ("\nFor letter b\n");

	if (b==3){

		if (a==2){
			printf("*****\n");
		}

		else {
			printf("*****\n");
			printf(">>>>>\n");
			printf("<<<<<\n");
		}
	}


	printf ("\nFor letter c\n");

	if (b==3){

		if (a==2){
			printf("*****\n");
		}

		else {
			printf("*****\n");
			printf(">>>>>\n");
		}

		printf("<<<<<\n");
	}

	return 0;


}