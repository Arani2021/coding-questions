//any year is input through the keyboard.Write a program to determine whether the year is leap year or not.(considering leap year occurs after every 4 years)
#include<stdio.h>
int main(){
    int n;
    printf("Enetr the year :");
    scanf("%d" ,&n);
    if(n%4==0){
        printf("leap year");
    }
    else{
        printf("not leap year");
    }
    return 0;
}