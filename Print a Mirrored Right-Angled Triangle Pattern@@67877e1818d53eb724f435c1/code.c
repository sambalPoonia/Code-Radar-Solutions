#include<stdio.h>  

int main() {  
    int a, i, j;  
    scanf("%d", &a);  
    
    for(i = 0; i < a; i++) {  
        for(j = 0; j <=a-i-2; j++) {  
            printf(" ");
        }  
        for(j = 0; j <=i; j++) {  
            printf("*");
        }  

        printf("\n");  
    }  
    
    return 0;  
}