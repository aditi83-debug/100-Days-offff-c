//Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;

    // Read the value of n from the user
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    // Loop through numbers from 2 up to n
    for (int i = 2; i <= n; i++) {
        bool isPrime = true;

        // Check if i is divisible by any number from 2 up to i/2
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = false;
                break; // Exit the inner loop early if a factor is found
            }
        }

        // If the number is prime, print it followed by a space
        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
