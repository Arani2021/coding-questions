//wap to print the transpose of matrix entred by the user& stote it in a different matrix
#include<stdio.h>
int main(){
    int r;
    printf("Enter the no of row:\n");
    scanf("%d",&r);
    int c;
    printf("Enter the no of columns:\n");
    scanf("%d",&c);
    printf("Enter the all elements:\n");
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int brr[c][r];
    
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
           //printf("%d ",arr[j][i]);
           brr[i][j]=arr[j][i];
        }
        
    }
    //printing 2D array
    printf("\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}