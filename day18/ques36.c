//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include <stdio.h>

// Function to calculate HCF using Euclidean algorithm
int findHCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Taking input from the user
    if (scanf("%d %d", &num1, &num2) == 2) {
        // Calculating and printing the HCF
        int hcf = findHCF(num1, num2);
        printf("%d\n", hcf);
    }

    return 0;
}
