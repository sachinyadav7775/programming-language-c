#include<stdio.h>
int factoeial(int x){
    int fact = 1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n , int r){
    int ncr = factoeial(n)/(factoeial(r)*factoeial(n-r));
    return ncr;
}

int main(){
    int m ;
    printf("Enterf m : ");
    scanf("%d",&m);
    //int nsp = 0;
    // for(int k=0;k<=m-i;k--){
    //    printf(" ");
    // }
    for(int i=0;i<=m;i++){
        for(int k=0;k<=m-i;k--){
            printf(" ");
        }

        for(int j=0;j<=i;j++){
            int icj = combination(i,j);
            printf("%d",icj);
        }
        printf("\n");
    }

    return 0;
}