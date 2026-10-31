//Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/

#include <stdio.h>

int main() {
    int a, b;

    // Read the two numbers from the user
    if (scanf("%d %d", &a, &b) != 2) {
        return 1; 
    }

    // Swapping logic without a third variable
    a = a + b; // 'a' now holds the sum of both numbers
    b = a - b; // 'b' becomes the original value of 'a'
    a = a - b; // 'a' becomes the original value of 'b'

    // Print the result matching the sample output format
    printf("After swap: %d %d\n", a, b);

    return 0;
}
