//find the sum of a given matrix of n x m
#include<stdio.h>
int main(){
    int r;
    printf("Enter the no of rows :");
    scanf("%d",&r);
    int c;
    printf("Enter the no of columns:");
    scanf("%d",&c);
    printf("enter the elements\n");
    int arr[r][c];//r*c total elements
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
        printf("The sum of the given matrices is %d\n",sum);
    }
    //printf("The sum of the given matrices is %d\n",sum);
    return 0;
}// আরেকবার দেখতে হবে কোড রান করছে না।