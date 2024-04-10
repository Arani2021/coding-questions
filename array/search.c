//given array and a number X . find out if x lies in the array or not if yes then print the index
#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int x = 2;
    int idx = -1;
    bool flag = false;
    for(int i = 0;i<=6;i++){
        if(arr[i]==x){
            flag = true;
            idx = i;
            break;
        }
    }
    if(flag==false){
        printf("%d is not present in the array",x);
    }
    else{
        printf("%d is presenty in the array and its index is %d",x,idx);
    }
    return 0;
}