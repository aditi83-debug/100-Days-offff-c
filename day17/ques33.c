//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    // Input the number
    if (scanf("%d", &num) != 1) {
        return 1;
    }

    originalNum = num;

    // Store the number of digits of num in n
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Compute the sum of the cubes/powers of individual digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        // round() is used to handle potential floating-point inaccuracies from pow()
        result += round(pow(remainder, n));
        originalNum /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == num)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}



