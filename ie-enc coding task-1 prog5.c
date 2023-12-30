#include <stdio.h>
#include <math.h>


int isPrime(int num)
{
    if (num <= 1)
        {
        return 0;
        }

    for (int i = 2; i <= sqrt(num); i++)
        {
        if (num % i == 0)
            {
            return 0;
            }
        }

    return 1;
}


int isArmstrong(int num)
 {
    int originalNum, remainder, result = 0, n = 0;
    originalNum = num;

    while (originalNum != 0)
        {
        originalNum /= 10;
        ++n;
        }

    originalNum = num;

    while (originalNum != 0)
        {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
        }

    if (result == num)
        {
        return 1;
        }
    else
     {
        return 0;
     }
}

int main()
 {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number))
        {
        printf("%d is a prime number\n", number);
    }
     else
     {
        printf("%d is not a prime number\n", number);
     }

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number\n", number);
    }
    else
    {
        printf("%d is not an Armstrong number\n", number);
    }

    return 0;
}
