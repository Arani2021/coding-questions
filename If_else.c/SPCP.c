//if cost price & selling price of an item is input through the keyboard ,write a program 
//to determine whether the seller has made profit or incurred loss.
#include<stdio.h>
int main (){
    int cp;
    printf("Enter cost price : " );
    scanf("%d",&cp);
    int sp;
    printf("Enter selling price : " );
    scanf("%d",&sp);
    if(sp>cp){
        printf("profit");
    }
    if(sp<cp){
        printf("loss");
    }
    if(cp==sp){
        printf("no profit,no loss");
    }
    return 0;
}
