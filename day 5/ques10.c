Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/


  #include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    // Input total seconds from the user
    if (scanf("%d", &total_seconds) != 1) {
        return 1; // Exit if input is invalid
    }

    // Calculate hours, minutes, and remaining seconds
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    // Output the result in hours:minutes:seconds format
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
