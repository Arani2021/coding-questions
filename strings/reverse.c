//reverse a string 
#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    puts("enter the string");
    gets(str);
   // puts("The size is :");
    //property of puts- its gives a \n automatically
    //size
    int size = 0;
    int k=0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    int i;
    int j;
    for( i=0,j=size-1;i<=j;i++,j--){
        char temp = str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts("The reverse string is :");
    puts(str);   
 return 0;
}
