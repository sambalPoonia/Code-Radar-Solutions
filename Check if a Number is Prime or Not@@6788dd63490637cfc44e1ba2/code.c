#include<stdio.h>
int main(){
    int a,i;
    bool prime;
    scanf("%d",&a);
    if(a>1){
        for(i=2;i<a;i++){
            if(a%i == 0){
                prime = true;
                break;
            }else {
                prime = false;
            }

        }
        if(prime == true){
            printf("Prime");
        }else{
            printf("Not Prime");
        }
    }
}