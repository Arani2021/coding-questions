//print the sum of the series 1-2+3-4+5-6..upto 'n'
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    // 1-2+3-4+5.. n terms
    // odd numbers add hocche
    // even numbers subtract hocche
    int sum = 0;
    for(int i=1;i<=n;i++){
        if(i%2!=0) sum = sum + i;
        else sum = sum - i;
    }
    printf("the sum is : %d",sum);
    return 0;
}