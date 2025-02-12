#include<stdio.h>
#include<stdbool.h>
int main(){
    int a,i;
    bool prime = true;
    scanf("%d",&a);
    if(a>1){
        for(i=2;i<a;i++){
            if(a%i == 0){
                prime = false;
                break;
            }else {
                prime = true;
            }

        }
        if(prime == false){
            printf("Not Prime");
        }else{
            printf("Prime");
        }
    }
}



