#include<stdio.h>
int main(){
    int n;
    printf("enter the number of the rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=n;j++){
            int d= a+64;
            char ch=(char)d;//type casting
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}