#include <stdio.h>
int main()
{
    int number, reversedNumber;

    printf("Enter a number: ");
    scanf("%d", &number);

    reversedNumber = reverseNumber(number);

    printf("The reversed number is: %d\n", reversedNumber);

    return 0;
}
int reverseNumber(int n)
{
    int reversedNum = 0;

    while (n > 0)
        {
        int digit = n % 10;
        reversedNum = reversedNum * 10 + digit;
        n /= 10;
        }

    return reversedNum;
}
