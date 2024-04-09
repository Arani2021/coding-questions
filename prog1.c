//find the length of the string 
#include<stdio.h>
int main(){
    int i,sum=0;
    char var[20];
    printf("Enter the string:");
    scanf("%s",&var);
    for(i=0;var[i]!=0;i++)
    {
        sum=sum+1;
    }
    printf("Length of the string:%d",sum);
    return 0;
}