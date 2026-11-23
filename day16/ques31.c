//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/



#include <stdio.h>

void convertToBinary(int n) {
    // Array to store binary number bits
    int binaryNum[32];
    int i = 0;

    // Handle the case when the number is 0
    if (n == 0) {
        printf("0");
        return;
    }

    // Store remainder in binary array
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Print binary array in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
}

int main() {
    int num;

    // Take user input
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        return 1;
    }

    // Call the function to print binary representation
    convertToBinary(num);
    printf("\n");

    return 0;
}
