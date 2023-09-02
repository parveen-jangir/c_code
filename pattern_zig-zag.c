#include<stdio.h>

int main (){
    int i,j,k,l,m=4;
    for ( i = 1; i <=m; i++)
    {
        for(j =4;j>=i;j--){
            printf("    ");
        }
        for(k = i;k>=1;k--){
            if(i==k)
            printf("   *");
            else
            printf("    ");
        }
        for(l = 2;l <= i; l++){
            if(i==l)
            printf("   *");
            else
            printf("    ");
        }
        for(j =3;j>=i;j--){
            printf("    ");
        }
        for(j =2;j>=i;j--){
            printf("    ");
        }
        for(k = i;k>=1;k--){
            if(i==k&&i!=m)
            printf("   *");
            else if(i!=k)
            printf("    ");
        }
        for(l = 2;l <= i; l++){
            if(i==l)
            printf("   *");
            else
            printf("    ");
        }
        printf("\n");
    }
}