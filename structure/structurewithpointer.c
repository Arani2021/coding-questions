//pointers to structure
#include<stdio.h>
#include<strings.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1={1333,8.3,"arani"};
    printf("student roll=%d\n",s1.roll);
    struct student *ptr = &s1;
    printf("student roll = %d\n",(*ptr).roll);
    return 0;
}
