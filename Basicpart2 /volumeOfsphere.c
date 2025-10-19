#include<stdio.h>
int main(){
    int r = 7; // radius     // 1
    int v = (4 * 3.14* r * r * r) / 3; //volume
    float V = (4 * 3.14* r * r * r) / 3; //volume
    printf("the volume is : %d",v); 
    printf("\nthe volume is : %f",V); 

    float p , R , si , t ; // 2
    p = 100  , R = 30 , t = 5;
    si = (p*R*t)/100;
    printf("\nthe volu of si :%f",si); 

    int x , y ;
    printf("enetr values of x and y");
    scanf("%d%d ",&x , &y);
    printf("x = %d y = %d ", x , y);
    
    return 0;
}