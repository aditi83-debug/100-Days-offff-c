//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

#include <stdio.h>

int main() {
    int n;
    
    // Read the number of terms
    if (scanf("%d", &n) != 1) {
        return 1;
    }
    
    double sum = 0.0;
    
    // Loop to calculate the sum of n terms
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            // First term is explicitly 1
            sum += 1.0;
        } else {
            // Subsequent terms follow the pattern: (2i - 1) / (2i - 2)
            // For i=2: 3/2 -> Wait, the sample test case has 1 + 3/4 + 5/6 + 7/8...
            // Let's re-verify the indices for the terms:
            // Term 1: 1
            // Term 2: 3/4
            // Term 3: 5/6
            // Term 4: 7/8
            // Formally, for i-th term (where i > 1):
            // Numerator = 2 * i - 1
            // Denominator = 2 * i
            double numerator = 2 * i - 1;
            double denominator = 2 * i;
            sum += numerator / denominator;
        }
    }
    
    // Print the output matched to the sample test case format
    printf("Approximate sum: %.1f\n", sum);
    
    return 0;
}
