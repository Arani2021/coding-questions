#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    scanf("%[^\n]s",str);//only the 1st word will be considered
   // gets(str);//entire sentence can be considered
    printf("input : %s",str);
    return 0;
}