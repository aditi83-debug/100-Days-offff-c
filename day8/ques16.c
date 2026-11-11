//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include <stdio.h>

int main() {
    double num1, num2, num3;

    // Reading three numbers from standard input
    if (scanf("%lf %lf %lf", &num1, &num2, &num3) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    // Comparing the numbers using if-else logic
    if (num1 >= num2 && num1 >= num3) {
        printf("Largest is %g\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("Largest is %g\n", num2);
    } else {
        printf("Largest is %g\n", num3);
    }

    return 0;
}
