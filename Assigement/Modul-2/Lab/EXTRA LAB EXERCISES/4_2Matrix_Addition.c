//Write a C program that accepts two 2x2 matrices from the user and adds them. Display the 
//resultant matrix. 
//Challenge: Extend the program to work with 3x3 matrices and matrix multiplication. 

#include <stdio.h>
#include <conio.h>
int main() {
    int a[2][2], b[2][2], sum2[2][2];
    int c[3][3], d[3][3], mul[3][3];
    int i, j;

    printf("Enter elements of 2x2 matrix A:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of 2x2 matrix B:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nSum of A and B:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            sum2[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum2[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter elements of 3x3 matrix C:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("C[%d][%d]: ", i, j);
            scanf("%d", &c[i][j]);
        }
    }

    printf("Enter elements of 3x3 matrix D:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("D[%d][%d]: ", i, j);
            scanf("%d", &d[i][j]);
        }
    }

    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            mul[i][j] = c[i][j] * d[i][j];
            printf("%d ", mul[i][j]);
        }
    }

    printf("\nResult of C X D:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", mul[i][j]);
        }
    }

    return 0;
}
