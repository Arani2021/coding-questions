#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of the row:");
    scanf("%d",&n);
    int a=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){
            printf("%d ",j);
            
        }
        printf("\n");
        a--;
    }
    return 0;
}