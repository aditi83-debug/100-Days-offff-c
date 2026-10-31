Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/


  #include <stdio.h>

int main() {
    int num1, num2, temp;

    // Reading the two numbers from the input
    if (scanf("%d %d", &num1, &num2) == 2) {
        // Swapping logic using a third (temporary) variable
        temp = num1;
        num1 = num2;
        num2 = temp;

        // Displaying the result
        printf("After swap: %d %d\n", num1, num2);
    }

    return 0;
}
