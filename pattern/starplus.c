#include<stdio.h>
int main(){
    int n ;
    printf("enter no. of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int a = n/2 + 1 ;
            if(j==a || i==a) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    int m ;
    printf("enter no. of rows : ");
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
            if(i==j || i+j==m+1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }

    return 0;
}