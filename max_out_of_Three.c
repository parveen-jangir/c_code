#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter value of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b&&a==c)
    printf("tino brabar hai");

     else if(a==b&&a!=c&&a>c)
    printf("a or b brabar hai\na and b bada hai");

    else if(a==b&&a!=c&&a<c)
    printf("a or b brabar hai\nc bada hai");

     else if(b==c&&b!=a&&b>a)
    printf("b or c brabar hai\nb and c bada hai");

    else if(b==c&&b!=a&&b<a)
    printf("a or b brabar hai\na bada hai");

     else if(a==c&&a!=b&&a>b)
    printf("a or c brabar hai\na and c bada hai");

    else if(a==c&&a!=b&&a<b)
    printf("a or c brabar hai\nb bada hai");


    else if(a>b&&a>c)
    printf("a bada hai mujhe pata chal gayaa");

    else if(b>a&&b>c)


    printf("b bada hai mujhe pata chal gayaa");

    else if(c>b&&c>a)
    printf("c bada hai mujhe pata chal gayaa");

    return (0);
}