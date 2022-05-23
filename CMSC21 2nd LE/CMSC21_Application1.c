#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>  /*toupper, isalpha*/

void scan_word(int occurrences[26]);
bool is_anagram(int occurrences1[26], int occurrences2[26]);

int main (void){
	int i,
		occurrences1[26] = {0},
		occurrences2[26] = {0};

	scan_word(occurrences1);	//for the first word
	scan_word(occurrences2);	//for the second word

	//displays whether the words are anagrams or not
	if (is_anagram(occurrences1, occurrences2)){
		printf("The words are anagrams.\n");
	}


	else {
		printf ("The words are not anagrams.");
	}

	return 0;
}

//scans the word entered by the user and updates the array 
void scan_word(int occurrences[26]){

	char c;

	printf("Enter word: ");
	while ((c=getchar()) != '\n'){
		if (isalpha(c)){
			occurrences[toupper(c) - 'A']++;
		}
	}
}

//traverses the words and checks if the words contain the same letters
bool is_anagram(int occurrences1[26], int occurrences2[26]){

	bool same = true;

	for (int i=0; i<26; i++){

		if (occurrences1[i] != occurrences2[i]){
			same = false;	//the function returns false if the words are not anagrams
			break;
		}
	}

	return same;
}