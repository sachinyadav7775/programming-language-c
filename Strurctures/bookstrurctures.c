#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        int noOfpages;
        float price;
    }a,b,c;
    a.noOfpages = 100;
    a.price = 411.5;
    strcpy(a.name,"Secret Seven");
    b.noOfpages = 250;
    b.price = 499.5;
    strcpy(b.name,"Famous Five");
    printf("%d\n",b.noOfpages);
    printf("%f\n",a.price);
    printf("%s\n",a.name);

    return 0;
}