#include<stdio.h>
int main(){
    int n, d=0;
    printf("enter an no. :");
    scanf("%d",&n);

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
        printf("prime");
    }
    if(d==0){
        printf("not prime");
    }
    

}