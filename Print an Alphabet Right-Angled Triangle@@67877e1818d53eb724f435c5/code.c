#include<stdio.h>
int main(){
    int i,a,j;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=0;j<=i;j++){
            printf("%d",j+1);
        }
        printf("\n");
    }
}