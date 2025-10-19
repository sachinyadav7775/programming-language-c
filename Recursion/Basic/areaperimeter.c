#include<stdio.h>
int main(){
    int l ;
    printf("enter length:");
    scanf("%d",&l);
    int b ;
    printf("enter breadth:");
    scanf("%d",&b);
    int a = l*b ;
    int p = 2 * (l+ b );
    if (a>p){
      printf("area is freater than perineter");
    }  
    else{
      printf("area  not freater than perineter");
    }
  return 0;
}