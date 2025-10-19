#include<stdio.h>
int main(){
    int n ;
    printf("Enter a number :");
    scanf("%d",&n);
    // 1 2 4 8 16 32 64 ...... upto a number of terms
    // we are going to use extra variables
    int a = 1 ;
    for(int i=1;i<=n;i++){
        printf("%d  ",a);
     a = a * 2 ;
    } 

    // 3 12 48  ...... upto a number of terms
    // we are going to use extra variables
    int b = 3 ;
    for (int i=1;i<=n;i++){
        printf("%d ",b);
        b = b*4 ;
    } 
    
    float x = 100 ;               
    // 100 50 25  ...... upto a number of terms
    // we are going to use extra variables
    for (int i=1;i<=n;i++){
        printf("%f ",x);
        x = x / 2 ;
    }
    return 0;
}