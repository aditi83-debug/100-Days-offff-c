//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001
*/


#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum;
    int firstDigit, lastDigit, digits;
    int swappedNum;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    originalNum = num;

    // Handle negative numbers by working with the absolute value
    int isNegative = (num < 0);
    if (isNegative) {
        num = -num;
    }

    // Extract the last digit
    lastDigit = num % 10;

    // Find the total number of digits minus 1 (to use as an exponent)
    digits = (int)log10(num);

    // Extract the first digit
    firstDigit = num / (int)pow(10, digits);

    // Reconstruct the number with swapped digits
    // 1. Remove the first digit: num % (int)pow(10, digits)
    // 2. Remove the last digit from that result: / 10
    // 3. Shift it back left: * 10
    // 4. Add the new first digit shifted to the highest place, and the new last digit
    swappedNum = lastDigit * (int)pow(10, digits); // Place last digit at the front
    swappedNum += (num % (int)pow(10, digits) / 10) * 10; // Add the middle digits
    swappedNum += firstDigit; // Add first digit to the end

    // Restore negative sign if necessary
    if (isNegative) {
        swappedNum = -swappedNum;
    }

    printf("Original: %d\n", originalNum);
    printf("Swapped:  %d\n", swappedNum);

    return 0;
}
