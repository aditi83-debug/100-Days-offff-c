Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/


#include <stdio.h>

int main() {
    int num, sum = 0;

    // Read the input number
    if (scanf("%d", &num) != 1) {
        return 1;
    }

    // Find and sum all proper divisors
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of divisors equals the original number
    // A perfect number must also be greater than 0
    if (sum == num && num > 0) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }

    return 0;
}
