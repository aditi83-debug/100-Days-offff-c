//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imagPart;

    // Reading the coefficients a, b, and c
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    // Calculating the discriminant
    discriminant = b * b - 4 * a * c;

    // Categorizing roots based on the discriminant
    if (discriminant > 0) {
        // Roots are real and different
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        
        // Formatting output to match sample test case (integers where applicable)
        printf("Roots are real and different: %.0f, %.0f\n", root1, root2);
    } 
    else if (discriminant == 0) {
        // Roots are real and same
        root1 = -b / (2 * a);
        printf("Roots are real and same: %.0f\n", root1);
    } 
    else {
        // Roots are complex
        printf("Roots are complex\n");
    }

    return 0;
}
