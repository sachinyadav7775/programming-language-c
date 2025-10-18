#include<stdio.h>
int main(){
    int arr[3][3] = {{1,2,6},{4,7,0},{5,1,5}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}