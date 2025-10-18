#include<stdio.h>
int main(){
    int n ;
    printf("enter number of lines : ");
    scanf("%d",&n);
    int min = 0 ;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int a = i ;
            if(i>n) a = 2*n - i ;                        // {1} min
            int b = j ;
            if(b>n) b = 2*n - j ;
            if(a<b) min = a ;
            else min = b ;
            printf("%d",min);
        }
        printf("\n");
    }
    int m ;
    printf("enter number of lines : ");
    scanf("%d",&m);
    int Min = 0 ;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int a = i ;
            if(i>n) a = 2*n - i ;                           // {2} max
            int b = j ;
            if(b>n) b = 2*n - j ;
            if(a<b) Min = a ;
            else Min = b ;
            printf("%d",n+1-Min);
        }
        printf("\n");
    }


    return 0;
}