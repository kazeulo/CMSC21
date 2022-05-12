#include <stdio.h>

//define the size of the 2D array
#define ROWS 9		
#define COLUMNS 8

int main (void){

	//declare datatypes of the variables to be used
	int i, j, x;
	char point;

	/*declare and initialize the multidimentional array.

	since we cannot store different data types in a single array, 
	i initialized another array for the alphabets*/

	char nodes[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
	int road_network[ROWS][COLUMNS] = {
		{1, 1, 0, 0, 0, 1, 0, 0},
		{1, 1, 1, 0, 0, 0, 0, 0},
		{0, 1, 1, 0, 1, 1, 0, 0},
		{0, 0, 0, 1, 1, 0, 0, 0},
		{0, 0, 0, 1, 1, 0, 0, 0},
		{1, 0, 1, 0, 0, 1, 0, 0},
		{1, 0, 0, 1, 0, 0, 1, 0},
		{0, 0, 0, 0, 0, 1, 0, 1}
	};

	/*DISPLAYING THE MULTIDIMENSIONAL ARRAY*/
	for (i=0; i<ROWS; i++){

		//for the upper-left empty cell
		if (i == 0){
			printf("\t");
		}

		//puts brackets in alphabets that are considered as charging stations
		else if (i==3 || i==4){
			printf("[%c]\t", nodes[i-1]);
		}

		//prints the alphabets in the first column of the array
		else{
			printf("%c\t", nodes[i-1]);
		}

		for(j= 0; j < COLUMNS; j++){

			//prints the alphabets in the first row of the array
			if (i==0){
				printf("%c\t", nodes[j]);
			}

			//prints the boolean values 1 and 0
			else{
				printf("%d\t", road_network[i-1][j]);
			}
		}

		printf("\n");

	}


	/*FINDING THE NEAREST CHARGING STATIONS*/

	printf ("\nWhich point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H\n");
	printf ("Enter your location: ");
	scanf ("%d", &point);

	printf ("\nAt point: %c\n", nodes[point]);

	x=0;	

	while (x < 8){

		//checks if there is a charging station next to the current location
		if ((x == 2 || x==3) && road_network[point][x] == 1){
			printf("Arrived at charging station %c.", nodes[x]);
			x = 8;
		}

		/*if there is no charging station next to the current location,
		then the program finds a path to the nearest one*/
		else if ( point < x &&  road_network[point][x]==1){

			/*updates the value of the variable point which follows the path
			in finding the nearest charging station*/
	 		point = x;	 

	 		printf ("Now at point %c\n", nodes[point]);
		}

		/*special case for point H since there is no path
		to go to any charging station*/
		else if (point == 7){
			printf ("No charging station found.");
			x = 8;
		}

		x+=1;
		
	}

	return 0;
}
