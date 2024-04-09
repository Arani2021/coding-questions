#include<stdio.h>
int main(){ 
    int n,a; 
    printf("Enter the no of rows:");
    scanf("%d",&n);
     for(int i=1;i<=n;i++){
        if(i%2!=0) a=1;
         else a=0;//৭ আর ৮ লাইন কোড শুরু করার
         for(int j=1;j<=i;j++){
             printf("%d",a);
            if(a==0) a=1;
             else a=0;//১১ আর ১২ লাইন সুইচ করা
        }
        printf("\n");
     }
       
    //  printf("Enter the no of rows:");
    //  scanf("%d",&n);
    //  for(int i=1;i<=n;i++){
        
    //      }
    //      printf("\n");
    //  }
    
    
    return 0;
}