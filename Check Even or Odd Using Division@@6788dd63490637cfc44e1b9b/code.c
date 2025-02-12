#include <stdio.h>  

int main() {  
    int number;  

    // Prompt user input  
    printf("Enter an integer: ");  
    scanf("%d", &number);  

    // Check if the number is even or odd using division  
    if (number / 2 * 2 == number) {  
        printf("Even");  
    } else {  
        printf("Odd");  
    }  

    return 0;  
}  