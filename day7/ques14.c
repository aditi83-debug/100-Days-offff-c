Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Input a character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Convert the character to lowercase to handle both cases easily
    char lower_ch = tolower(ch);

    // Check if the character is an alphabet letter
    if ((lower_ch >= 'a' && lower_ch <= 'z')) {
        // **Check if it matches any vowel**
        if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } else {
        printf("Not an alphabet character.\n");
    }

    return 0;
}
