#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void scan_word(int *ptr);
bool is_anagram(int *ptr1, int *ptr2);

int main (void){
	int i, 
		occurrences1[26] = {0}, 
		occurrences2[26] = {0},
		*ptr1,	//declare ptr1 and ptr2 as pointers
		*ptr2;

	ptr1 = occurrences1,
	ptr2 = occurrences2;

	scan_word(ptr1);	//first word
	scan_word(ptr2);	//second word

	if (is_anagram(ptr1, ptr2)){
		printf("The words are anagrams.\n");
	}


	else {
		printf ("The words are not anagrams.");
	}

	return 0;
}

//scans the word entered by the user and updates the array 
void scan_word(int *ptr){

	char c;

	printf("Enter word: ");
	while ((c=getchar()) != '\n'){
		if (isalpha(c)){
			ptr[toupper(c) - 'A']++;
		}
	}
}

//traverses the words and checks if the words contain the same letters
bool is_anagram(int *ptr1, int *ptr2){

	bool same = true;

	for (int i=0; i<26; i++){

		if (ptr1[i] != ptr2[i]){
			same = false;	//the function returns false if the words are not anagram
			break;
		}
	}

	return same;
}