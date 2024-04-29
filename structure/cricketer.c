#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        char name[15];
        int age;
        int noOfMatches;
        float average;
    }cricketer;
    cricketer arr[3];
    for(int i=0;i<3;i++){
        scanf("%s",arr[i].name);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].noOfMatches);
        scanf("%f",&arr[i].average);

    }
    for(int i=0;i<3;i++){
        printf("Name : %s\n",arr[i].name);
        printf("Age : %d\n",arr[i].age);
        printf("Number of matches played : %d\n",arr[i].noOfMatches);
        printf("Average : %f\n",arr[i].average);
        printf("\n");
    }
    return 0;
}