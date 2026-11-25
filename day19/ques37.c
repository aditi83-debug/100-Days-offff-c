//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/


#include <stdio.h>

// Function to calculate Greatest Common Divisor (GCD) using Euclidean algorithm
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate Least Common Multiple (LCM)
int findLCM(int a, int b) {
    // LCM * GCD = a * b => LCM = (a * b) / GCD
    // Division is done first to prevent potential integer overflow
    return (a / findGCD(a, b)) * b;
}

int main() {
    int num1, num2;

    // Reading inputs from the user
    if (scanf("%d %d", &num1, &num2) == 2) {
        // Calculating and printing the LCM
        int lcm = findLCM(num1, num2);
        printf("%d\n", lcm);
    }

    return 0;
}
