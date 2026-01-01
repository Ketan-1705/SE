//Write a C program that counts the number of words in a sentence entered by the user. 
// Challenge: Modify the program to find the longest word in the sentence.

#include <stdio.h>
#include <conio.h>


int main() {
    char s[200];
    int i, count = 1;

    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);
    
	
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' '){
        	count++;
       }
    }

    printf("Number of words: %d\n", count);


    return 0;
}

