#include <stdio.h>  

int main() {  
    int n;  

    // Prompt the user for input  
    printf("Enter a positive integer: ");  
    scanf("%d", &n);  

    // Check if n is positive  
    if (n <= 0) {  
        printf("Please enter a positive integer.\n");  
        return 1; // Exit the program with an error code  
    }  

    // Loop from 1 to n and print each number  
    for (int i = 1; i <= n; i++) {  
        printf("%d\n", i);  
    }  

    return 0; // Successful execution  
}  .