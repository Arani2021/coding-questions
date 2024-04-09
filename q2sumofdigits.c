//wap to print sum of digits of a given number.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d" ,&n);
    int sum=0;
    int lastdigit = 0;//এখানে যা খুশি digit লেখা যাবে
    while(n!=0){
        lastdigit=n%10;//এক্সট্রা লাসট ডিজিট
        sum=sum+lastdigit;
        n=n/10;//শেষ সংখ্যাটা রিমুভ করা হচ্ছে
    }
    printf("the number of digits are %d",sum);
    return 0;
}