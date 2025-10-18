#include<stdio.h>
int main(){
    int n ;
    printf("enter number of lines :");
    scanf("%d",&n);
    int nst = n ;
    int nsp = 1 ;
    for(int i=1;i<=2*n+1;i++){
        printf("%d",i);
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        int a = 1 ;
        for(int j=1;j<=nst;j++){   // number print 
            printf("%d",a);
            a++;
        }
        for(int k=1;k<=nsp;k++){    // spaces print
            printf(" ");
            a++;
        }
        for(int l=1;l<=nst;l++){      // number print
            printf("%d",a);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    int m ;
    printf("enter number of rows : ");
    scanf("%d",&m);
    int Nst = m ;
    int Nsp = 0 ;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=Nsp;j++){   // spaces
            printf(" ");
        }
        for(int k=1;k<=Nst;k++){    // stars
            printf("%d",k);
        }
        Nsp++;
        Nst--;
        printf("\n");
    }
    
    return 0;
}