
#include <stdio.h>   
#include <ctype.h>   // include the function toupperand  isalpha
#include <stdbool.h> // allows the bool return type


void scan_word(int occurrences[26]);//declares the functions
bool is_anagram(int occurrences1[26], int occurrences2[26]);


int main(void) {

    int occurrences1[26] = {0}, occurrences2[26] = {0}; //count how many times each character appears in word

    
    printf("Enter first word: ");//userprompt
    scan_word(occurrences1);
    printf("Enter second word: ");
    scan_word(occurrences2);
    
    if (is_anagram(occurrences1, occurrences2)) {//check if the words inputted are anagrams
        printf("The words are anagrams.\n");
    }
    else {
        printf("The words are not anagrams.\n");
    }
    return 0;
}




void scan_word(int occurrences[26]) {//count the occurences
    char c;
    while ((c = getchar()) != '\n') {
        
        if (isalpha(c)) { 
            occurrences[toupper(c) - 'A']++;//converts lowercase to uppercase
        }
    }
}

//compare 2 arrays if they have the same occurence
bool is_anagram(int occurrences1[26], int occurrences2[26]) {
    int i;
    for (i = 0; i < 26; i++) {
        /* Check each character in the first word 
            to see if it is different from second word's characters. */
        if (occurrences1[i] != occurrences2[i]) {
            return false;
        }
    }
    return true;
}
      