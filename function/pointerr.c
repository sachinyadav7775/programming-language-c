#include<stdio.h>
int main(){
    int a ;
    printf("enter a number : ");
    scanf("%d",&a);
    int* x = &a ;  // int* -> int la address store karta hai 
    int** y = &x; // int** -> int* ka address store karta 
    int*** z = &y ;   //vvip -> *x = 7 ;// a is changed.
    int**** s = &z ;
    printf("%d\n",a);
    printf("%d\n",*x);  // %p se address print hota hai
    printf("%d\n",**y);
    printf("%d\n",***z);
    printf("%d\n",****s);


    return 0;
}