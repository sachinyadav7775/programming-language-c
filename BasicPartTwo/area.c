#include<stdio.h> 
int main(){
    float radius ;
    printf("enter redius :");
    scanf("%f",&radius);
    float pi = 22 / 7 ;
    float area = (pi * 1 * radius * radius )/ 4 ;
    printf("the area of circle is :%f\n",area);
    float a ;
    printf("Enter is a number : ");
    scanf("%f",&a);
    float b ;
    printf("Enter is b number : ");
    scanf("%f",&b);
    float c ;
    printf("Enter is c number : ");
    scanf("%f",&c);
    float x = (-b + (2*b-4*a*c)) / (2*a) ;
    printf("The value of x : %f\n",x);

    return 0;
}