#include<stdio.h>
int main(){
    int a, i, j;
    scanf("%d", &a);
    for(i = 0; i < 2*a-1; i++){
        for(j = 0; j < 2*a-1; j++){
            if (i < a) {
                if (j >= a-i-1 && j <= a+i-1) {
                    printf("*");
                } else {
                    printf(" ");
                }
            } else {
                if (j >= i-a+1 && j <= 3*a-i-3) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
