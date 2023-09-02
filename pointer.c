#include<stdio.h>

int main(){
    int age =22;
    int *poi =&age;
 
    printf("%u",poi);
    printf("\n%u",&age);
    printf("\n%u",&poi);
}