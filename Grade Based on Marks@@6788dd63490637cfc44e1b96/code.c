#include<stdio.h>
int main(){
    int g;
    scanf("%d",g);
    if (g>=90){
        printf("A");
    }else if(g>=80){
        printf("B");
    }else if(g>=70){
        printf("C");
    }else if(g>=60){
        printf("D");
    }else{
        printf("F");
    }
}