//given an array of marks of the 10 students if the mark of any student is less than 35 print its roll number.[roll number here refers to the index of the array]
#include<stdio.h>
int main(){
    int marks[10];//taking input marks of 10 students.
    //={95,85,90,45,89,23,75,30,63,10};
    
   for(int i=0;i<10;i++){
        printf("enter the marks of students %d:",i+1);
        scanf("%d",&marks[i]);
       // if(marks[i]<35){
         //   printf("%d\n",i);
        }
        for(int i=0;i<10;i++){
            if(marks[i]<35){
                printf("%d\n",i);
            }
        }
     
    return 0;
}