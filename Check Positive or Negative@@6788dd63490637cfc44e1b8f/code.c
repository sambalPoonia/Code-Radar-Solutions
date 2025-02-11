#include<stdio.h>
int main(){
    int ints;
    scanf("%d",&ints);
    if(ints>0){
        printf("Positive");
    }else if(ints<0){
        printf("Negative");
    }else{
        printf("Zero");
    }
}