//find the min value out of all the elements in the array
#include<stdio.h>
#include<limits.h>
int main(){ 
    int n,min=INT_MAX;
    int arr[7]={10,11,2,19,30,454,3};
    for(int i=0;i<=6;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("%d", min);
    return 0;
}