//wap to print reverse of a given number &stor the number.
#include<stdio.h>
int main(){
    int n,r=0;
    printf("Enter the number :");
    scanf("%d",&n);
    while(n>0){
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
   // r=r/10;
    printf("the reversed number is %d",r);
    return 0;
}
