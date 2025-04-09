#include <stdio.h>  

int main() {  
    int n;  

    // Prompt the user for input  

    scanf("%d", &n);  

    // Check if n is positive  
    if (n <= 0) {  
       
        return 1; // Exit the program with an error code  
    }  

    // Loop from 1 to n and print each number  
    for (int i = 1; i <= n; i++) {  
        printf("%d ", i);  
    }  

    return 0; // Successful execution  
}  