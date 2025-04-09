#include <stdio.h>  

int main() {  
    int n;  

    // Prompt the user for input  

    scanf("%d", &n);  

    // Loop to print the multiplication table from 1 to 10  
    for (int i = 1; i <= 10; i++) {  
        printf("%d x %d = %d\n", n, i, n * i);  
    }  

    return 0; // Successful execution  
}  