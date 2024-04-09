//#include<stdio.h>
//int main(){
  //  int n;
    //printf("Enter the row :");
    //scanf("%d",&n);
    //int a=1;
    //for(int i=1;i<=n;i++){
      //  for(int j=1;j<=i;j++){
        //    printf("%d ",n);
          // a+=2;
        //}
        //printf("\n");
   // }
    //return 0;
//}
#include <stdio.h>

int main() {
   int rows, i, j, num = 1;

   printf("Enter the number of rows: ");
   scanf("%d", &rows);

   for (i = 1; i <= rows; i++) {
      for (j = 1; j <= i; j++) {
         printf("%d ", num);
         num += 2;
      }
      printf("\n");
   }

   return 0;
}
