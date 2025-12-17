#include<stdio.h>
void decreasing(int n ){
    if(n==0) return;
    printf("%d ",n);
    decreasing(n-1);
    return;
}
int Main(){
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);
    decreasing(n);
    
    return 0;
}