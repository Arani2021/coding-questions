//Given an array of integers change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10
#include<stdio.h>
int main(){
     int ar[7]={1,2,3,4,5,6,7};
     for(int i = 0;i<=6;i++){
        if(i%2!=0){
            ar[i]=ar[i]*2;
        }
        else{
            ar[i]=ar[i]+10;
        }
     }
     for(int i = 0;i<=6;i++){
        printf("%d ",ar[i]);
     }
     
    return 0;
}