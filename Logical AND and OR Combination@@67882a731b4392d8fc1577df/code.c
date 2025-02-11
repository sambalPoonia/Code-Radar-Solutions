#include<stdio.h>
int main(){
    int i1,i2;
    scanf("%d %d",&i1,&i2);
    if(i1>0 && i2<0||i1 ==0 && i2==0){
    printf("True");
    }else {
        printf("False");
    }
}