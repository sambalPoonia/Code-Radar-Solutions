#include<stdio.h>
#include<ctype.h>
int main(){
    char c;
    scanf("%c",&c);
    if(islower(c)){
        printf("Uppercase");
    }else if(isupper(c)){
        printf("lowercase");
    }else{
        printf("Not an alphabet");
    }
}