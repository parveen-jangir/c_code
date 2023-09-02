#include<stdio.h>

void add();
void sub();
void mul();
void div();

int main(){
    printf("enter 'a' for add\nenter 's' for subtract\nenter 'm' for multiply\nenter 'd' for divide :");
    char calc;
    scanf("%c",&calc);
    if(calc == 'a')
    add();
    else if(calc == 's')
    sub();
    else if(calc == 'm')
    mul();
    else if(calc == 'd')
    div();
    return 0;
}

void add(){
    printf("enter value of a and b");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("total :%d",a+b);
}


void sub(){
    printf("enter value of a and b");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("total :%d",a-b);
}

void mul(){
    printf("enter value of a and b");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("total :%d",a*b);
}

void div(){
    printf("enter value of a and b");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("total :%d",a/b);
}