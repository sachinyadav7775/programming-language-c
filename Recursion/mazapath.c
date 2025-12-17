#include<stdio.h>
int maze(int cr , int cc , int er , int ec){
    int rightways = 0 ;
    int downways = 0 ;
    if(cr==er && cc==ec) return 1;
    if(cr==er){   // only rightways call
        rightways += maze(cr,cc+1,er,ec);
    }
    if(cc==ec){   // only downways call                           // method {1}
        downways += maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        rightways += maze(cr,cc+1,er,ec);
        downways += maze(cr+1,cc,er,ec);
    }
    int totalwayas = rightways + downways ;
    return totalwayas;
}
int main(){
    int n;  // no of rows 
    printf("Enter on of rows of the maze : ");
    scanf("%d",&n);
    int m ; // on of columns  
    printf("Enter no of columns of the maze : ");
    scanf("%d",&m);
    int noOfways = maze(1,1,n,m);
    printf("%d\n", noOfways );
    return 0;
} 
int maze(int n , int m){
    int rightways = 0 ;
    int downways = 0 ;
    if(n==1 && m==1) return 1;
    if(n==1){ // cannot go down
        rightways += maze(n,m-1);
    }
    if(m==1){ // cannot go down
        downways += maze(n-1,m);
    }                                                          // method {2}
    if(n>1 && m>1){
        rightways += maze(n,m-1);
        downways += maze(n-1,m);
    }
    int totalwayas = rightways + downways ;
    return totalwayas;
}
int main(){
    int n;  // no of rows 
    printf("Enter on of rows of the maze : ");
    scanf("%d",&n);
    int m ; 
    printf("Enter no of columns of the maze : ");
    scanf("%d",&m);
    int noOfways = maze(n,m);
    printf("%d\n", noOfways );

    return 0;
}