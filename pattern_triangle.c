#include<stdio.h>
int main(){
    int i,j,k,l;
    for ( i = 1; i <=4; i++)
    {
        for(j =4;j>=i;j--){
            printf("    ");
        }
        for(k = i;k>=1;k--){
            printf("   %d",k);
        }
        for(l = 2;l <= i; l++){
            printf("   %d",l);
        }
        printf("\n");
    }
    return 0;
}