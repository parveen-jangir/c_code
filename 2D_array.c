#include<stdio.h>
int main(){
    int A[4][4]={{6,8,8},{2,78,6},{5,45,8}};
    for(int i=0;i<=3;i++){
        for(int j=0;j<=3;j++){
        printf("value of A[%d][%d] :%d\n",i,j,A[i][j]);
        }    
    }
return 0;
}
