#include <stdio.h>

int MinMax(int a[], int size) {
    int min = a[0];
    int max = a[0];

    for (int i = 1; i < size; i++) {
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
    }

    printf("The smallest number is: %d\n", min);
    printf("The largest number is: %d\n", max);
}

int main() {
    int numbers[5];

    printf("Enter 5 numbers: \n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    MinMax(numbers, 5);

    return 0;
}

