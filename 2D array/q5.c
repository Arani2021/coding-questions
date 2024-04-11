//wap to rotate a matrix 90 degree clockwise
#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of row/columns:");
    scanf("%d",&n);
     printf("Enter the no of elements:\n");
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
     //transpose
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
           int temp=arr[i][j];
           arr[i][j]=arr[j][i];
           arr[j][i]=temp;
        }
        
    }
    //rotate
    for(int i=0;i<n;i++){
        int j=0;
        int k=n-1;
        while(j<k){
            //swap arr[i][j] & arr[i][k]
            int temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
            j++;
            k--;
        }
    }
    printf("\n");
    //output
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}