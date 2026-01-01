// Write a C program that takes a number as input and checks whether it is a palindrome using a function. 
//? Challenge: Modify the program to check if a given string is a palindrome.

#include <stdio.h>
#include <conio.h>


int pali(int n) {
    int rev = 0, mstore;
    
    while (n > 0) {
        mstore = n % 10;
        rev = rev * 10 + mstore;
        n = n / 10;
    }
    return rev;
}

void main() {
    int n, rev_num;

    printf("Enter a number: ");
    scanf("%d", &n);

    rev_num = pali(n);

    if (n == rev_num) 
        printf("Palindrome number");
    else
        printf("Not a palindrome number");

    getch();
}


