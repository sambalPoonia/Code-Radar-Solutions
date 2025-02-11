#include<stdio.h>
#include<ctype.h>
int main(){
    char c;
    scanf("%c",&c);
    if(islower(c)){
        print("Uppercase")
    }else if(isupper(c)){
        print("lowercase")
    }else{
        print("Not an alphabet")
    }
}