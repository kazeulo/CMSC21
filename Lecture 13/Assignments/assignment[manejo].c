#include <stdio.h>
#include <math.h>

struct line {

	struct point {
		float x;
		float y;
	}point1, point2;

	float *midpoint;
	float slope;
	float distance;
};

//function prototypes
float solveSlope (struct line line1);
float solveDistance (struct line line1);
void solveMidpoint (struct line line1);
void getSlopeInterceptForm (struct line line1);

//main function
int main (){

	struct line line_1;

	printf("Enter x and y for point 1: ");
	scanf("%f%f", &line_1.point1.x, &line_1.point1.y);
	printf("\nEnter x and y for point 2: ");
	scanf("%f%f", &line_1.point2.x, &line_1.point2.y);

	printf ("\nSlope: %f", solveSlope(line_1));
	printf ("\nDistance between 2 points: %f", solveDistance(line_1));
	solveMidpoint (line_1);
	getSlopeInterceptForm(line_1);
	
	return 0;
}


//function for slope
float solveSlope (struct line line1){

	//formula for slope
	line1.slope = (line1.point1.y - line1.point2.y) / (line1.point1.x - line1.point2.x);

	return line1.slope;
}


//function for distance between the two points
float solveDistance (struct line line1){

	float a, b;

	a = (line1.point2.x - line1.point1.x);
	b = (line1.point2.y - line1.point1.y);

	//distance formula
	line1.distance = sqrt((a*a)+(b*b));

	return line1.distance;
}

//function for the midpoint
void solveMidpoint (struct line line1){

	float x, y;

	//midpoint formula
	x = (line1.point1.x + line1.point2.x)/2;
	y = (line1.point1.y + line1.point2.y)/2;

	printf ("\nMidpoint: %f %f", x, y);
}

//function for the slope intercept from
void getSlopeInterceptForm (struct line line1){

	//formula to get the value of b or the y-intercept
	float y_intercept = line1.point2.y - (solveSlope(line1)*line1.point2.x);

	printf ("\nSlope-intercept form: y = %fx + (%f)", solveSlope(line1), y_intercept);
}