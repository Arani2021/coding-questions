//Take a positive integer input and tell if it is divisible by 5 or not.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    if(n%5==0){
     printf("Divisible by 5");
    }
     else{
        printf("Not divisible by 5");
     }
    return 0;
}