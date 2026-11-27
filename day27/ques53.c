//Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/



#include <stdio.h>

int main() {
    int i, j;
    
    // Upper half of the pattern (rows with 1, 3, 5, 7, and 9 stars)
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    
    // Lower half of the pattern (rows with 7, 5, 3, and 1 stars)
    for(i = 4; i >= 1; i--) {
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
