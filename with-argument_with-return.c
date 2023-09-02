#include<stdio.h>

int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);

int main(){
    int a,b;
    char c;
    printf("enter 'a' for add\nenter 's' for subtract\nenter 'm' for multiply\nenter 'd' for divide :");
    scanf("%c",&c);

    printf("enter a and b :");
    scanf("%d%d",&a,&b);

    if(c == 'a'){
    printf("total :%d",add(a,b));
    }

    if(c == 's'){
    printf("total :%d",sub(a,b));
    }

    if(c == 'm'){
    printf("total :%d",mul(a,b));
    }

    if(c == 'd'){
    printf("total :%d",div(a,b));
    }
    return 0;
}

int add(int a,int b){
    return a+b;
}

int sub(int a,int b){
    return a-b;
}

int mul(int a,int b){
    return a*b;
}

int div(int a,int b){
    return a/b;
}