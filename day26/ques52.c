//Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.



#include <stdio.h>

int main() {
    // Row 1: 1 star
    printf("*\n\n");

    // Row 2: 3 stars
    for(int i = 0; i < 3; i++) {
        printf("*\n");
    }
    printf("\n");

    // Row 3: 5 stars
    for(int i = 0; i < 5; i++) {
        printf("*\n");
    }
    printf("\n");

    // Row 4: 3 stars
    for(int i = 0; i < 3; i++) {
        printf("*\n");
    }
    printf("\n");

    // Row 5: 1 star
    printf("*\n");

    return 0;
}


*/
