#include <stdio.h>

int main (void){

	int num, day, i; 

	printf ("Enter the number of days in a month: ");
	scanf ("%d", &num);

	if (num > 27 && num <= 31){
		printf ("Enter the starting day of the week: ");
		scanf ("%d", &day); 

		//prints the spaces at the start of the calendar
		for (i = 0; i < day ; i++){
			printf ("   ");
		}

		//prints the days/numbers of the calendar
		for (i=1; i<=num ; i++){
			printf ("%2d ", i);

			//creates a new line for every week in the month
			if ((day+i-7)%7==0)
				printf("\n");
		}
	}

	//if the input of the user is invalid
	else {
		printf("Invalid Input!");
	}

	return 0;
}