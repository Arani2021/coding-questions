#include<stdio.h>
int main (){
    int n;
    printf("Enter the percentage:");
    scanf("%d",&n);
    if(n>80){
        printf("A grade\n");
    }
    else if (n>60){
        printf("B grade\n");
    }
    else if (n>50){
        printf("C grade\n");
    }
    else if(n>=40){
        printf("D grade\n");
    }
    return 0;
}
