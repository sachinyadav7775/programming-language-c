#include<stdio.h>
int main(){
    float radius ;
    printf("enter radius :");
    scanf("%f",&radius);
    float pi = 3.14;
    float area = pi * radius * radius ;
    printf("the area of circle is :%f",area);

    float Radius ;
    printf("\nEnter Radius :");
    scanf("%f",&Radius);
    float Pi = 3.14 ;
    float Area = 2 * Pi * Radius  ;
    printf("The Area of circle is :%f",Area);

    int RAdius ;
    printf("\nEnter RAdius :");
    scanf("%d",&RAdius);
    int PI = 3.14 ;
    int ARea = 2 * PI * RAdius  ;
    printf("The ARea of circle is :%d",ARea);

    float bhar ;
    printf("enter bhar:");
    scanf("%f",&bhar);
    float molemass;
    printf("enter molemass:");
    scanf("%f",&molemass);
    float volume;
    printf("enter volume:");
    scanf("%f",&volume);
    float molarity = bhar  * 1000 / molemass * volume ;
    printf("the  molarity : %f",molarity);

    return 0;
    
}