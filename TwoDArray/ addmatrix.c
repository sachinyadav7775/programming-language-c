#include<stdio.h>
int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int brr[3][3] = {9,8,7,6,5,4,3,2,1};
    printf("\n");
    int res[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            res[i][j] = arr[i][j] + brr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",res[i][j]);
        }   
        printf("\n");
    }
    
    return 0;
}