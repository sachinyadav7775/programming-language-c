#include<stdio.h>
int main(){
    int x ;
    printf("Enter number of rows : ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        int a = 1 ;
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a = a + 2 ;
        }
        printf("\n");
    }
    int y ;
    printf("Enter number of rows : ");
    scanf("%d",&y);
    for(int i=1;i<=y;i++){
        int a = 1 ;
        for(int j=1;j<=y+1-i;j++){
            printf("%d ",a);
            a = a + 2 ;
        }
        printf("\n");
    }
    int k ;
    printf("Enter number of rows : ");
    scanf("%d",&k);
    int a = 1;
    for(int i=1;i<=k;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a++ ;
        }
        printf("\n");
    }

    return 0;
}