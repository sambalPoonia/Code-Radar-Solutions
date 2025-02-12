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
            printf("%c is a vowel.\n", ch);  
        } else {  
            printf("%c is a consonant.\n", ch);  
        }  
    }  
    // Check if the character is a digit  
    else if (isdigit(ch)) {  
        printf("%c is a digit.\n", ch);  
    }  
    // If it's neither a letter nor a digit, it's a special character  
    else {  
        printf("%c is a special character.\n", ch);  
    }  

    return 0;  
} 