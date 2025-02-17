#include<stdio.h>
int main(){
    int a ;
    int i,j;
    scanf("%d",&a);
    for(i=0; i<a; i++){
        for(j=0; j<=2a-1; j++;){
            printf("*");
        }
        printf("\n"); 
    }
    return 0;
}