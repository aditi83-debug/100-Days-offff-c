//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Read the temperature in Celsius from standard input
    if (scanf("%f", &celsius) == 1) {
        // Apply the conversion formula: (Celsius * 9/5) + 32
        fahrenheit = (celsius * 9 / 5) + 32;

        // Print the result matching the required sample test case format
        // %.0f strips the decimal points if the input/output are whole numbers
        printf("Fahrenheit=%.0f\n", fahrenheit);
    }

    return 0;
}
