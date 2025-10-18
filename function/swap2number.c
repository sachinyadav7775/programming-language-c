#include<stdio.h>
int main(){
    int a;
    printf("enter the a number : ");
    scanf("%d",&a);
    int b;
    printf("enter the b number : ");
    scanf("%d",&b);
    int c;
    printf("enter the c number : ");
    scanf("%d",&c);
    //int temp;
    //temp = a ;
    //a = b ;
    //b = temp ;
    a = a + b ;
    b = a - b ;
    a = a - b ;
    printf("the value of a is %d\n",a);
    printf("the value of a is %d\n",b);
    printf("the value of a is %d\n",c);

    return 0;
}