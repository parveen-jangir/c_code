#include<stdio.h>

int main(){
    int age = 12;
    int __age = 15;
    int _age = 13;
    int *pt =&age;
    int *_pt =&_age;
    int *__pt =&__age;

    printf("addres of age = %u \n address of _age = %u \n address of __age = %u \n difference = %u \n difference = %u \n comparision = %u comparision = %u", pt,_pt,__pt,pt- _pt,pt-__pt,pt == _pt,pt==pt);
}