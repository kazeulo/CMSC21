#include <stdio.h>

int main (void){

	int i;

	i = 11;

	while (i<10){
		printf ("a) i = %d\n", i);
	}


	for (; i<10;){
		printf ("b) i = %d\n", i);
	}

	do {
		printf ("c) i = %d\n", i);
	} while (i<10);

	return 0;
}