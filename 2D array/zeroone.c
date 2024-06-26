//Given a matrix having 0-1 only find the row  with the maximum no of 1's
#include<stdio.h>
int main(){
    int arr[3][4]={{1,0,1,1},{0,1,0,1},{1,0,0,1}};
    // 1 0 1 1
    // 0 1 0 1
    // 1 0 0 1 
    int maxCount = 0;
    int maxIdx=0;
    for(int i=0;i<3;i++){
        int count = 0;
        for(int j=0;j<4;j++){
            if(arr[i][j]==1) count++;
        }
        if(maxCount<count){
            maxCount=count;
            maxIdx=i;
        }
        printf("\n");
    }
    printf("%d",maxIdx);
    return 0;
}