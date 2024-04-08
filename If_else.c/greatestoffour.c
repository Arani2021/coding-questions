//take 4 positive integers input and print the greatest of them
#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    printf("Enter the 1st number:");
    scanf("%d",&a);
    printf("Enter the 2nd number:");
    scanf("%d",&b);
    printf("Enter the 3rd number:");
    scanf("%d",&c);
    printf("Enter the 4th number:");
    scanf("%d",&d);
    if(a>b&&a>c&&a>d){
        printf("%d is gretaest",a);
    }
    if(b>a&&b>c&&b>d){
        printf("%d is greatest",b);
    }
    if(c>a&&c>b&&c>d){
        printf("%d is the greatest",c);
    }
    if(d>>a&&d>b&&d>>c){
        printf("%d is the greatest",d);
    }
    return 0;
}
 