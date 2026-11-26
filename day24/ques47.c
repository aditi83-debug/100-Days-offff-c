//Q47: Write a program to print the following pattern:
*
**
***
****
*****

/*
Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

#include <stdio.h>

int main() {
    int i, j;
    
    // Loop for rows (1 to 5)
    for (i = 1; i <= 5; i++) {
        // Loop to print stars in each row
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after printing each row
        printf("\n");
    }
    
    return 0;
}
