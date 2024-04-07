#include<stdio.h>

int main(){
    float pi = 3.14;
    float radius; 
    printf("Enter the radius : ");
    scanf("%f",&radius);
    
    float area = pi * radius * radius;
    printf("The area of the circle is : %f",area);
    return 0;
}