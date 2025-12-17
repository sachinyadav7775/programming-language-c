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
    a.date = 10;
    a.month = 9;     // a-> [ 9 / 09 / 2009 ]
    a.year = 2010;

    b.date = 10;
    b.month = 10;   // b-> [ 10 / 10 / 2010 ]
    b.year = 2010;

    bool flag = true;
    if(a.date!=b.date) flag = false;
    if(a.month!=b.month) flag = false;
    if(a.year!=b.year) flag = false;

    if(flag==true) printf("The dates are same");
    else printf("The dates are different");
    printf("\n");

    return 0;
}