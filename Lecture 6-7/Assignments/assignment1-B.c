#include <stdio.h>
#include <stdbool.h>

#define NUM_PATHWAYS ((int) (sizeof(pathway) / sizeof(pathway[0])))

int main (){

	/*
	A boolean array that contains true/false values refferring to whether a 
	certain pathway is open/close for transportation.

	Only pathways 0 and 3 are open for transportation. The rest are close.
	*/

	/*we can just declare the first 3 elements of the array and the rest 
	will automatically be considered by the program as 0 or false*/
	bool pathway [8] = {true, false, true};

	/*we can also further shorthen the code using the boolean value 1
	and 0 which also corresponds to true and false, such as:

	bool pathway [8] = {1, O, 1};
	*/

	for (int i=0; i<NUM_PATHWAYS; i++){

		/*
		Display the status of each pathway.

		Remember that pathway is type bool so its elements are either true/false - 1/0.
		*/

		if (pathway[i]){
			printf("pathway [%d] is open \n", i);
		}

		else{
			printf ("pathawy [%d] is close \n", i);
		}
	}

	return 0;
}