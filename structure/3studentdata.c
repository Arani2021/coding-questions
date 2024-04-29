#include<stdio.h>
#include<strings.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1;
    s1.roll = 558;
    s1.cgpa=6.7;
    strcpy(s1.name,"arani");
    printf("student name=%s\n",s1.name);
    printf("student roll no=%d\n",s1.roll);
    printf("student cgpa = %f\n",s1.cgpa);
    


    struct student s2;
    s2.roll =58;
    s2.cgpa=7.30;
    strcpy(s2.name,"rani");
    printf("student name=%s\n",s2.name);
    printf("student roll no=%d\n",s2.roll);
    printf("student cgpa = %f\n",s2.cgpa);
    


    struct student s3;
    s3.roll =68;
    s3.cgpa=7.7;
    strcpy(s3.name,"raj");
    printf("student name=%s\n",s3.name);
    printf("student roll no=%d\n",s3.roll);
    printf("student cgpa = %f\n",s3.cgpa);
    return 0;
}