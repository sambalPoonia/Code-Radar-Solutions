#include <stdio.h>  

int main() {  
    int n;   

    scanf("%d", &n);  

    if (n <= 0) {  
       
        return 1; 
    }  

    for (int i = 1; i <= n; i++) {  
        printf("%d ", i);  
    }  

    return 0; 
}  