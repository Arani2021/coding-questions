#include<stdio.h>
#include<strings.h>
struct student{
int roll;
float cgpa;
char name[100];
};
int main(){
    struct student s1={145,8.5,"arani"};
    printf("student roll=%d\n",s1.roll);
    return 0;
}