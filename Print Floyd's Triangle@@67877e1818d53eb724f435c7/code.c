#include<stdio.h>
int main(){
    int n;
    int number;
    scanf("%d", &n);
    for(int i=0;i<=n;i++){
    
        for(int j=1;j<=i;j++){
            printf("%d ",number);
            number++;
        }
        printf("\n");
    }
}