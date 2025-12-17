#include<stdio.h>
int main(){
    /*int n ;
    printf("enter number of lines : ");
    scanf("%d",&n);
    int nst = 1 ;
    int nsp = 3 ;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        nsp = nsp - 1 ;
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        nst = nst + 2 ;
        printf("\n");
    }
    int m ;
    printf("enter number of lines : ");
    scanf("%d",&m);
    int Nsp = 3 ;
    int Nst = 1 ;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=Nsp;j++){
            printf(" ");
        }
        Nsp = Nsp - 1 ;
        for(int k=1;k<=Nst;k++){
            printf("%d",k);
        }
        Nst = Nst + 2 ;
        printf("\n");
    }
    int x ;
    printf("enter number of lines : ");
    scanf("%d",&x);
    int nSt = 1 ;
    int nSp = 3 ;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=nSp;j++){
            printf(" ");
        }
        nSp = nSp - 1 ;
        int d = 1;
        for(int k=1;k<=nSt;k++){
            int k = d + 64 ;
            char ch = (char)k;
            printf("%c",ch);
            d++;
        }
        nSt = nSt + 2 ;
        printf("\n");
    }*/
    int y ;
    printf("enter number of lines : ");
    scanf("%d",&y);
    int nsp = y - 1 ;
    for(int i=1;i<=y;i++){
        for(int i=1;i<=nsp;i++){
            printf(" ");
        }
        nsp--;
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        int a = i - 1 ;
        for(int k=1;k<=i-1;k++){
            printf("%d",a);
            a--;
        } 
        printf("\n");
    }
    int r ;
    printf("enter number of lines : ");
    scanf("%d",&r);
    int Nsp = r - 1 ;
    for(int i=1;i<=r;i++){
        for(int i=1;i<=Nsp;i++){
            printf(" ");
        }
        nsp--;
        int d = 1 ;
        for(int j=1;j<=i;j++){
            int h = d + 64 ;
            char ch = (char)h;
            printf("%c",ch);
            d++;
        }
        for(int k=1;k<=i+1;k++){
            int h = d + 64 ;
            char ch = (char)h;
            printf("%c",ch);
            d--;
        } 
        printf("\n");
    }   

    return 0;
}