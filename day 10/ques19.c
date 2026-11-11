//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

#include <stdio.h>

int main() {
    double a, b, c;

    // Read the three sides of the triangle
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        return 1; 
    }

    // Check if the sides form a valid triangle
    if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("Invalid Triangle\n");
    } 
    // Check for Equilateral: all three sides are equal
    else if (a == b && b == c) {
        printf("Equilateral\n");
    } 
    // Check for Isosceles: any two sides are equal
    else if (a == b || b == c || a == c) {
        printf("Isosceles\n");
    } 
    // If neither, it must be Scalene: all sides are different
    else {
        printf("Scalene\n");
    }

    return 0;
}
