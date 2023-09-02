#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    float cgpa;
    char *name; //here we use pointer insted of array because we cannot reinitialize derectly.
    char f_name[100];//when we use array for string, we want use library <string.h> and use copy command strcpy(paste_string,copy_string)
};

int main(){
    struct student c1;
    c1.name ="parveen";//here we can reinitialize
    c1.roll = 11178735;
    c1.cgpa = 7.6;
    strcpy(c1.f_name,"narender jangir");//here we use copy command

    struct student c2 ={5,9.36,"aryan","parveen ji"};//this is another format to asign value to a structure varible.



    printf("my name is %s\n",c1.name);
    printf("my father's name is %s\n",c1.f_name);
    printf("my roll no. is %d\n",c1.roll);
    printf("my CGPA is %f\n",c1.cgpa);

    
    printf("my name is %s\n",c2.name);
    printf("my father's name is %s\n",c2.f_name);
    printf("my roll no. is %d\n",c2.roll);
    printf("my CGPA is %f\n",c2.cgpa);
    return 0;
}