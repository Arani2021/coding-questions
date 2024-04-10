//calculate the product of all the elements in the given array.
#include<stdio.h>
int main(){
    int n,i,pro=1;
    printf("Enter the number of elements of the array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        pro=pro*arr[i];
    }
    printf("product of all elements in the array is:%d",pro);
    return 0;
}