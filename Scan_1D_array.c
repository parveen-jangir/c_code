#include<stdio.h>
int main(){
    int A[3];
    printf("enter any four no. :");
    for(int i=0;i<=3;i++){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<=3;++i)
    printf("value of A[%d] :%d\t",i,A[i]);

}