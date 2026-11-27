//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include <stdio.h>

int main() {
    int n;
    
    // Read the size of the array
    if (scanf("%d", &n) != 1) {
        return 0;
    }
    
    int positive = 0;
    int negative = 0;
    int zero = 0;
    
    // Loop through the elements and categorize them
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        
        if (num > 0) {
            positive++;
        } else if (num < 0) {
            negative++;
        } else {
            zero++;
        }
    }
    
    // Print the output exactly as required
    printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero);
    
    return 0;
}
