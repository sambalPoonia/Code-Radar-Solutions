#include<stdio.h>
#include<ctype.h>
int main(){
    char c;
    scanf("%c",&c);
    if(islower(c)){
        printf("lowercase");
    }else if(isupper(c)){
        printf("uppercase");
    }else{
        printf("Not an alphabet");
    }
}