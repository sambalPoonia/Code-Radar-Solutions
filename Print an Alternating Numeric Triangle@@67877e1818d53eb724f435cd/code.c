#include<stdio.h>
int main(){
    int n;

    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
             if ((i + j) % 2 == 0) {  
                printf("1"); // Print '1' for even sum of indices  
            } else {  
                printf("0"); // Print '0' for odd sum of indices  
            } 
            }
        }
        printf("\n");
    }
