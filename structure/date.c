//create a structure 'date' that contains three numbers namely date, month, year. Create 2 structure variables with different dates and now comoare the two.If the dates are equal then display message as "Equal" otherwise "Unequal".
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int date;
        int month;
        int year;
    }date;
    date a,b;
    a.date  = 15;
    a.month = 12;
    a.year = 2023;

    b.date = 19;
    b.month = 1;
    b.year = 2023;
    bool flag;
    if(a.date!=b.date) flag = false;
    if(a.month!=b.month) flag = false;
    if(a.year!=b.year) flag = false;
    if(flag==true) printf("the dates are same");
    else printf("the dates are different");
    return 0;
}