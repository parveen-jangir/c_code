#include<stdio.h>

void add(int a,int b);
void sub(int a,int b);
void mul(int a,int b);
void div(int a,int b);

int main(){
    printf("enter 'a' for add\nenter 's' for subtract\nenter 'm' for multiply\nenter 'd' for divide :");
    char calc;
    scanf("%c",&calc);
    
    printf("enter value of a and b :");
    int a,b;
    scanf("%d%d",&a,&b);

    if(calc == 'a')
    add(a,b);
    else if(calc == 's')
    sub(a,b);
    else if(calc == 'm')
    mul(a,b);
    else if(calc == 'd')
    div(a,b);
    return 0;
}

void add(int a,int b){
    printf("total :%d",a+b);
}

void sub(int a,int b){
    printf("total :%d",a-b);
}

void mul(int a,int b){
    printf("total :%d",a*b);
}

void div(int a,int b){
    printf("total :%d",a/b);
}