#include<stdio.h>

int main(){
    int B=0,i,I;
    int arr[]={5,7,2,1,25,25,3};

    for(i = 0;i<7;i++){
        if(B<arr[i]){
        B=arr[i];
        I=i;
        }
    }

    printf("Bigget index is arr[%d] :%d ",I,arr[I]);
}