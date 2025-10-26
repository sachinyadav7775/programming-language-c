#include<stdio.h>
#include<string.h>
int main(){
    typedef float realnumber ;
    typedef int integer;
    integer x = 38;
    realnumber y = 78.0;
    printf("%d\n",x);
    printf("%f\n",y);

    typedef struct Book{
        char name[50];
        int noOfpages;
        float price;
    }book;
    book a ;
    book b ;
    book c ;

    a.noOfpages = 100;
    a.price = 411.5;
    strcpy(a.name,"Secret Seven");

    b.noOfpages = 250;
    b.price = 750.50;
    strcpy(b.name,"Famous Five");

    c.noOfpages = 5005;
    c.price = 299.58;
    strcpy(c.name,"Famous Two");

    printf("%d\n",b.noOfpages);
    printf("%f\n",a.price);
    printf("%s\n",a.name);
    printf("%d\n",c.noOfpages);
    printf("%s\n",b.name);
    printf("%f\n",c.price);

    return 0;
}