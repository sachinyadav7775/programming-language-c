#include<stdio.h>
int main(){
    int n ;
    printf("enter number of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){         // on of lines / rows ->i        // {1}
        for(int j=1;j<=n;j++){     // on of columns ->j
            printf("%d ",j); 
        }
        printf("\n");  
    }
    int m ;
    printf("Enter numver of rows : ");                               // {2}
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    int f ;
    printf("enter number of rows : ");
    scanf("%d",&f);
    for(int i=1;i<=f;i++){                                         // {3}
        for(int j=1;j<=f+1-i;j++){
            printf("*");
        }
        printf("\n");
    } 
    int y ; 
    printf("enter number of rows : ");                           // {4}
    scanf("%d",&y);
    for(int i=1;i<=y;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    int x ;
    printf("enter number of rows : " ) ;                         // {5}
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x+1-i;j++){
            printf("%d ",j);
        }
        printf("\n");
    } 
    int p ;
    printf("enter number of rows : ");                          // {6}
    scanf("%d",&p);
    for(int i=1;i<=p;i++){
        for(int j=1;j<=p-i;j++){
          printf(" ");
        }
         for(int k=1;k<=i;k++){
             printf("*");
        }
        printf("\n");
    }
    int s ;
    printf("enter number of rows : ");
    scanf("%d",&s);                                             // {7}
    for(int i=1;i<=s;i++){
        for(int j=1;j<=s-i;j++){
          printf(" ");
        }
         for(int k=1;k<=s;k++){
             printf("*");
        }
        printf("\n");
    }

    return 0;
}