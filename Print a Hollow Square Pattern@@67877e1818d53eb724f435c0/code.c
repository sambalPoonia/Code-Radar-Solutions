#include<stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        for(j=0;j<=a;j++){
            if(j>=1 && j<=a){
                printf(" ");
            }else{
                printf("*");
            }
           
        } printf("\n");
    }
}