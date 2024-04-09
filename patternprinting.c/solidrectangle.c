#include<stdio.h>
int main (){
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    int m;
    printf("Enter no of colums:");
    scanf("%d",&m);
    for(int i=1;i<=n ;i++){// outer loop = no of lines = no of rows
        for(int i=1;i<=n ;i++){ //inner loop = no of stars in each line = no of colums
            printf("*");
        }
        printf("\n");
    }
   
    return 0;
}