#include<stdio.h>

void Address(int p);

int main(){
    int p;

    printf("address of in main =%p",&p);

    Address(p);

}

void Address(int p){
    printf("\naddress in function = %p",&p);
}