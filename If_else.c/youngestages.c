//if the ages of ram shyam and ajay are input through the keyboard write a program to determine the youngest of the three
#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enter 1st person's the age :");
    scanf("%d",&a);
    printf("Enter the 2nd person's age :");
    scanf("%d",&b);
    printf("Enter the 3rd person's age :");
    scanf("%d",&c);
    if(a<b&&a<c){
        printf("%d is youngest",a);
    }
    if(b<c&&b<a){
        printf("%d is youngest",b);
    }
    if(c<a&&c<b){
        printf("%d is youngest",c);
    }
    return 0;
}
