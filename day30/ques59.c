//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/

#include <stdio.h>

int main() {
    int n;
    
    // Read the size of the array
    if (scanf("%d", &n) != 1) {
        return 1;
    }
    
    int arr[n];
    int even_count = 0;
    int odd_count = 0;
    
    // Read array elements and count even/odd numbers
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    // Print the output in the required format
    printf("Even=%d, Odd=%d\n", even_count, odd_count);
    
    return 0;
}
