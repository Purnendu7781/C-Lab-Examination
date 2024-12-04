#include <stdio.h>

int main() {
    int start, end;

    // Input the range
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    // Print prime numbers in the range
    printf("Prime numbers between %d and %d are : ", start, end);

    for (int num = start; num <= end; num++) {
        if (num <= 1) {
            continue;  // Skip 0 and 1 as they are not prime
        }

        int isPrime = 1;  // Assume the number is prime
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;  // Not a prime number
                break;        // Exit the loop early
            }
        }

        if (isPrime) {
            printf("%d ", num);  // Print the prime number
        }
    }

    printf("\n");
    return 0;
}
