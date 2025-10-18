#include<stdio.h>
int main(){
    int m;
    printf("Enter on of rows of 1st matrix : ");
    scanf("%d",&m);
    int n;
    printf("Enter on of columns of 1st matrix : ");
    scanf("%d",&n);
    int arr[m][n];
    printf("\nEnter elements of 1st matrix :");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int p;
    printf("Enter on of rows of 1st matrix : ");
    scanf("%d",&p);
    int q ;
    printf("Enter on of columns of 1st matrix : ");
    scanf("%d",&q);
    int brr[p][q];
    printf("\nEnter elements of 2nd matrix :");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    if(n!=p){
        printf("The matrices cannot be multiplied");
    }
    else{
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j] = 0;
                for(int k=0;k<n;k++){
                    res[i][j] += arr[i][k]*brr[k][j];
                }
            }
        }
        printf("The resultant matrix is : \n");
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}