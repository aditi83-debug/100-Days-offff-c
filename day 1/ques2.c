//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2
*/

#include <stdio.h>

int main() {
    int num1, num2;
    int sum, diff, product, quotient;

    // Reading two integer inputs
    if (scanf("%d %d", &num1, &num2) == 2) {
        // Performing arithmetic operations
        sum = num1 + num2;
        diff = num1 - num2;
        product = num1 * num2;
        
        // Checking for division by zero to prevent runtime errors
        if (num2 != 0) {
            quotient = num1 / num2;
            // Displaying the output exactly matching the sample test case format
            printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, product, quotient);
        } else {
            printf("Sum=%d, Diff=%d, Product=%d, Quotient=Undefined (Division by zero)\n", sum, diff, product);
        }
    }

    return 0;
}
