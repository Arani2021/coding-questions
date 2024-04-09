//Display this gp 100,50,25,..upto'n' terms
#include<stdio.h>
int main(){
   //int n;
    //printf("Enter the number :");
    //scanf("%d",&n);
   //float a=100;
    //for(int i=1;i<=n;i++){
      //   printf("%f\n",a);
        //a = a*0.5;
    //}
    int n,i;
    float a=100.00;
    printf("Enter the value\n");
    scanf("%d",&n);
    for(i=1.00;i<n;i++){
        printf("%f\n",a);
        a=a*0.5;
    }
    return 0;
}