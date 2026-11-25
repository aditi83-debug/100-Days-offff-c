//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/



#include <stdio.h>

int main() {
    long long num;
    long long product = 1;
    long long temp;
    int has_odd = 0;

    // Read the input number
    if (scanf("%lld", &num) != 1) {
        return 1;
    }

    // Handle negative numbers by converting to positive
    if (num < 0) {
        num = -num;
    }

    temp = num;

    // Handle the special case where input is 0
    if (temp == 0) {
        printf("1\n");
        return 0;
    }

    // Process each digit of the number
    while (temp > 0) {
        int digit = temp % 10;
        
        // Check if the digit is odd
        if (digit % 2 != 0) {
            product *= digit;
            has_odd = 1;
        }
        
        temp /= 10;
    }

    // If there were no odd digits, the product defaults to 1
    printf("%lld\n", product);

    return 0;
}
