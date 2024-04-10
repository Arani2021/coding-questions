//wap to find a duplicate element from a given array of integers
#include<stdio.h>
int main(){
    int arr[10]={1,2,3,10,5,6,7,8,9,10};
    for(int i=0;i<=9;i++){
        for(int j=i+1;j<=9;j++){
            if(arr[i]==arr[j]){
                printf("%d is the duplicate element",arr[i]);
                break;
            }
        }
    }
    return 0;
}