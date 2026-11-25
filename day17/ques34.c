//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/


#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    
    // Read the input number
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    // Numbers less than or equal to 1 are not prime
    if (n <= 1) {
        printf("Not prime\n");
        return 0;
    }

    bool is_prime = true;

    // Check for factors from 2 up to the square root of n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }

    // Print the result based on the flag
    if (is_prime) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }

    return 0;
}
