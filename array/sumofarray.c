//calculate the sum of all the elements in the given array.
// #include<stdio.h>
// int main(){
//     //int arr[5]={1,2,3,4,5};
//     int n;
//     printf("Enter the size of the array : ");
//     scanf("%d",&n);
//     int sum = 0, arr[n];
//     for(int i=0;i<=n;i++){
//         sum = sum + arr[i];
//     }
//     printf("%d",sum);
//     return 0;
// }
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i <= n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("The sum of all elements in the array is %d\n", sum);
    return 0;
}
