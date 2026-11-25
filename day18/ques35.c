//Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/


#include <stdio.h>

int main() {
    int num;
    
    // Read the input number
    if (scanf("%d", &num) != 1) {
        return 1;
    }
    
    // Loop from 1 up to the number to find its factors
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}
