//wap to print sum of all the even digits of a given number.
#include<stdio.h>
int main(){
    int n,digit,sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(n>0){
        digit=n%10;//extra last digit 
    if(digit%2!=0){
        sum=sum+digit;
    }
        n=n/10;
    }
    printf("The sum of the odd digits is:%d",sum);
    return 0;
}