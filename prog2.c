#include<stdio.h>
int main(){
    int i,sum=0;
    char var[20];
    printf("Enter the string:");
    scanf("%s",&var);
    for(i=0;var[i]!=0;i++)
    {
        printf("%c=%d\n",var[i],var[i]);
    }
    return 0;
}