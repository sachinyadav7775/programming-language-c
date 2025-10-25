#include<stdio.h>
int main(){
    int n ;   
    printf("Enter a number :");
    scanf("%d",&n);
    // 4 7 10 13 16 19 22 25 28 31 ......upto n number of terms
    // we are going to use extra variables
    int a = 4;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a = a + 3;
    }
    int x ;   
    printf("Enter a number :");
    scanf("%d",&x);
    // 100 97 94 91 88 ......upto n number of terms
    // we are going to use extra variables
    int y = 100 ;
    for(int i=1;i<=x;i++){       // a>0 use not - number //
        printf("%d ",y);
        y = y - 3;
    }

    return 0;
}