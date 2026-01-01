//Write a C program that takes a string from the user and counts the number of vowels and 
//consonants in the string. 
//Challenge: Extend the program to also count digits and special characters.

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
	char str[100];
	int vowels = 0,consonant =0,digits=0,special=0,i;
	printf("Entre a String : ");
	gets(str);
	
	printf("\n string is : %s",str);
	
	for(i=0;str[i]!= '\0';i++){
		char ch=str[i];
		
		if(ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch =='u'||
			ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch =='U'){
				vowels++;
			}
		else if(ch >= 'a'&&ch <= 'z' || ch >= 'A'&&ch <= 'Z'){
			consonant++;
		}
		else if(ch >= '0'&&ch <= '9'){
			digits++;
		}
		else{
			special++;
		}
	}
	
	printf("\nvowels is : %d",vowels);
	printf("\nconsonant is : %d",consonant);
	printf("\ndigits is : %d",digits);
	printf("\ndspecial characters and space : %d",special);
	getch();
}
