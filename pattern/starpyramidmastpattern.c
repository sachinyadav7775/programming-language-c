#include<stdio.h>
int main(){
    int m ;
    printf("enter number of rows : ");
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m+1-i;j++){
            printf("*");
        }
        printf("\n");
    }
    int n ;
    printf("enter number of rows : ");
    scanf("%d",&n);
    int nst = n ;
    int nsp = 0 ;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){   // spaces
            printf(" ");
        }
        for(int k=1;k<=nst;k++){    // stars
            printf("*");
        }
        nsp++;
        nst--;
        printf("\n");
    }
    int x ;
    printf("enter number of rows : ");
    scanf("%d",&x);
    int nSt = x ;
    int nSp = 1 ;
    for(int i=1;i<=2*x+1;i++){
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=x;i++){
        for(int j=1;j<=nSt;j++){   // stars
            printf("*");
        }
        for(int k=1;k<=nSp;k++){   // spaces
            printf(" ");
        }
        for(int j=1;j<=nSt;j++){    // stars
            printf("*");
        }
        nSp+=2;
        nSt--;
        printf("\n");
    }
    return 0;
}
