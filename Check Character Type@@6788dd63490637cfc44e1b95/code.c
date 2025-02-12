#include <stdio.h>  
#include <ctype.h>  

int main() {  
    char ch;  

    // Prompt user input  
    printf("Enter a character: ");  
    scanf(" %c", &ch);  

    // Check if the character is a letter  
    if (isalpha(ch)) {  
        // Check for vowels  
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||  
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {  
            printf("Vowel");  
        } else {  
            printf("Consonant");  
        }  
    }  
    // Check if the character is a digit  
    else if (isdigit(ch)) {  
        printf("Digit");  
    }  
    // If it's neither a letter nor a digit, it's a special character  
    else {  
        printf("Special Character");  
    }  

    return 0;  
} 