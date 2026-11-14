//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include <stdio.h>

int main() {
    int n;
    long long product = 1; // Use long long to prevent overflow for larger values of n

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Handle edge case where n is less than 2
    if (n < 2) {
        printf("No even numbers in the given range.\n");
        return 0;
    }

    // Loop through even numbers starting from 2 up to n
    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("%lld\n", product);

    return 0;
}
