#include<stdio.h>
#include<strings.h>
int main(){
    char str[]="Arani";
    char* ptr = str;
    int i=0;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
        i++;
    }
    return 0;
}