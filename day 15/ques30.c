//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include <stdio.h>

int main() {
    int n, reversed = 0, remainder;

    // Read the number from the user
    scanf("%d", &n);

    // Reverse the number digit by digit
    while (n != 0) {
        remainder = n % 10;                 // Extract the last digit
        reversed = reversed * 10 + remainder; // Append digit to reversed number
        n = n / 10;                         // Remove the last digit from n
    }

    // Print the reversed number
    printf("%d\n", reversed);

    return 0;
}
