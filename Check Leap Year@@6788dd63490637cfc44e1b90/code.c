#include<stdio.h>
int main(){
    int y;
    scanf("%d",&y);
    if(y%4 == 0 && y%100!=0||y%100 ==0 && y%400 == 0){
        print("Leap Year")
    }else{
        print("Not a Leap Year")
    }
}