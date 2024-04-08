#include<stdio.h>
int main(){
    int n;// box banano holo
    printf("Enter a number :");
    scanf("%d",&n);// box er moddhey values deoa holo
    if(n%2==0){ // even condition
        printf("Even number");
    }
    //if(n%2!=0){ // odd condition    
     //   printf("odd number");
  // }
  else {
    printf("odd number");
  }
    return 0;
}