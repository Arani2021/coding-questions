#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int a = 0;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0){      //i is a factor of n
           // printf("our number is composite");
        //}
          //  else{
            //    printf("our number is prime");
            //}
            a=1;
              break;
        }
    }
    if(a==0) printf("the number is prime\n");
    else printf("the number is composite");
    return 0;
}