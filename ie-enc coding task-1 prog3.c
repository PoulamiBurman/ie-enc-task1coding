//Write a program to display the ASCII value of the character entered by the user.
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    int asciiValue = (int)ch;

    printf("The ASCII value of '%c' is: %d\n", ch, asciiValue);

    return 0;
}

