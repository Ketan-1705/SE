#include <stdio.h>
#include <conio.h>

int isPrime(int n)
{
    int i;

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void main()
{
    int num;

    printf("Enter your number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("Prime number");
    else
        printf("Not a prime number");

    getch();
}

