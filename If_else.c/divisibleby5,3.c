//TAke positive integer input and tell if it is divisible by 5 and 3
#include<stdio.h>
int main (){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    if(n%15==0){
        printf("divisible by 15");
    }
    else{
        printf("not divisible by 15 ");
    }
    return 0;
}