#include<stdio.h>
int main(){
    int n ;
    printf("enter english word of rows : ");
    scanf("%d",&n);                                     // A B C D E
    for(int i=1;i<=n;i++){                              // A B C D E                       
        int a = 1 ;                                     // A B C D E
        for(int j=1;j<=n;j++){                          // A B C D E
            int b = a + 64 ;                            // a = 64 
            char ch = (char)b;                          // ch = (char)65 -> ch = 'A'              
            printf("%c ",ch);
            a++;                           
        }
        printf("\n");
    }
    int m ;
    printf("enter english word of rows : ");
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        int d = 1 ;
        for(int j=1;j<=i;j++){
            int k = d + 64 ;
            char ch = (char)k;
            printf("%c ",ch);
            d++;
        }
        printf("\n");
    }
    int x ;
    printf("enter english word of rows : ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        int d = 1 ;
        for(int j=1;j<=m+1-i;j++){
            int k = d + 64 ;
            char ch = (char)k;
            printf("%c ",ch);
            d++;

        }
        printf("\n");
    }
    int y ;
    printf("enter english word of rows : ");
    scanf("%d",&y);
    for(int i=1;i<=y;i++){
        for(int j=1;j<=y-i;j++){
          printf(" ");
        }
        int d = 1;
        for(int k=1;k<=i;k++){
            int u = d + 64 ;
            char ch = (char)u;
            printf("%c",ch);
            d++;
        }
        printf("\n");
    }

    return 0;
    
}