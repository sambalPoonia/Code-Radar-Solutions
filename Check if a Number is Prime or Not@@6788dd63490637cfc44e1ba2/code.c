#include<stdio.h>
int main(){
    int a,i;
    bool prime;
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
            printf("Prime");
        }else{
            printf("Not Prime");
        }
    }
}