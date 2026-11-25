//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/

#include <stdio.h>

int main() {
    int num, temp, remainder, sum = 0;

    // Read the input number
    if (scanf("%d", &num) != 1) {
        return 1;
    }

    // Store the original number in a temporary variable
    // and handle negative numbers by taking the absolute value
    temp = num;
    if (temp < 0) {
        temp = -temp;
    }

    // Extract digits and calculate their sum
    while (temp > 0) {
        remainder = temp % 10;
        sum = sum + remainder;
        temp = temp / 10;
    }

    // Print the final sum
    printf("%d\n", sum);

    return 0;
}
