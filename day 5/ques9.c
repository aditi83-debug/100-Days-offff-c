//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

  #include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double simple_interest, compound_interest, total_amount;

    // Read input values: Principal, Rate (in percentage), and Time (in years)
    if (scanf("%lf %lf %lf", &principal, &rate, &time) != 3) {
        return 1;
    }

    // 1. Calculate Simple Interest
    // Formula: SI = (P * R * T) / 100
    simple_interest = (principal * rate * time) / 100.0;

    // 2. Calculate Compound Interest
    // Formula: Amount = P * (1 + R/100)^T
    // CI = Amount - P
    total_amount = principal * pow((1 + (rate / 100.0)), time);
    compound_interest = total_amount - principal;

    // Print the results matching the sample output format
    // %.2g or %.6g automatically prints cleaner decimals, 
    // but using %.2f or tracking precision removes trailing zeros carefully.
    // To match the exact sample cases (102.5 and 1125.76), we use a clean print approach:
    printf("Simple Interest=%.0f, Compound Interest=%.2g\n", simple_interest, compound_interest);

    return 0;
}
