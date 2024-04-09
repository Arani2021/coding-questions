//wap to print sum of all the even digits of a given number.
#include<stdio.h>
int main(){
    int n,digit;
    printf("Enter the number :");
    scanf("%d",&n);
    int sum = 0;
    while(n>0){
        digit=n%10;//extra the last digit
    if(digit%2==0){//even কিনা চেক করা হচ্ছে
            sum=sum+digit;//sum এর সাথে যোগ করা হচ্ছে
    }
        n=n/10;//remove the last digit from the number;
    }
    printf("the sum of even digits is:%d\n", sum);
    return 0;
}