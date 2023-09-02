#include<stdio.h>

int add();
int sub();
int mul();
int div();

int main(){
    printf("enter 'a' for add\nenter 's' for subtract\nenter 'm' for multiply\nenter 'd' for divide :");
    char calc;
    scanf("%c",&calc);
    if(calc == 'a'){
        printf("total :%d",add());
    }
    
    else if(calc == 's'){
        printf("total :%d",sub());
    }
    
    else if(calc == 'm'){
        printf("total :%d",mul());
    }
    
    else if(calc == 'd'){
        printf("total :%d",div());
    }
    
    
    return 0;
}

int add(){
    printf("enter value of a and b:");
    int a,b;
    scanf("%d%d",&a,&b);
    return a+b;
}

int sub(){
    printf("enter value of a and b:");
    int a,b;
    scanf("%d%d",&a,&b);
    return a-b;
}

int mul(){
    printf("enter value of a and b:");
    int a,b;
    scanf("%d%d",&a,&b);
    return a*b;
}

int div(){
    printf("enter value of a and b:");
    int a,b;
    scanf("%d%d",&a,&b);
    return a/b;
}