//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/


#include <stdio.h>

int main() {
    char binary[100];
    
    // Read the binary number as a string
    if (scanf("%99s", binary) != 1) {
        return 1;
    }
    
    // Loop through each character and flip the bits
    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        }
    }
    
    // Print the 1's complement result
    printf("%s\n", binary);
    
    return 0;
}
