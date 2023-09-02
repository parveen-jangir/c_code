#include<stdio.h>
int main(){
    int d=0;
    for(int n=3;n<=1000;n++){
        for(int i=2;i<n;i++){
        if(n%i==0){
            d=0;
            break;
        }
        
        else{
            d=1;
        }
    }
    if(d==1){
        printf("%d=prime\n",n);
    }
    if(d==0){
        printf("%d=not prime\n",n);
    }
    }
}