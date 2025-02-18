#include<stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    for(i=0;i<2*a-1;i++){
        for(j=0;j<2*a-1;j++){
            if(i>=a){
                if(j<=n-(i+1)+1 && j>=n+(i+1)-1){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else{
                if(j<=n-(i+1)+1 && j>=n+(i+1)-1){
                    prinft(" ");
                }else{
                    printf("*");
                }
            }
        }
    }
}