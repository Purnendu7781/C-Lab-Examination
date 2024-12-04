#include <stdio.h>
#include <math.h>

int main() {
    int num, sum = 0, temp, remainder, n = 0;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Copy the number to temp for later use
    temp = num;

    // Calculate the number of digits in the number
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;

    // Calculate the sum of each digit raised to the power of n
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);  // Raise each digit to the power of n
        temp /= 10;
    }

    // Check if the sum is equal to the original number
    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
