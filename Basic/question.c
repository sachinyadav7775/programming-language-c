#include<stdio.h>
    int main(){
    int x = 3 , y , z;
    y=x=10 ;
    z = x < 10 ;
    printf("\nx = %d y = %d z = %d",x , y , z);
    int a=5,b,c;
    b=a=15;
    c=a<15;
    printf("\na=%d b=%d c=%d",a,b,c);
    int k = 15;
    printf("\n%d %d %d",k!=15 , k=20 ,k<30);
    
    int X = 3 ; 
    float Y = 3.0 ;
    if(X==Y)
    printf("\nX and Y are equal");
    else 
    printf("\nX and Y are equ");

    return 0;
}   