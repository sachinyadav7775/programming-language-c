#include<stdio.h>
int main(){
    int num[26],temp ;
    num[0] = 100;
    num[25] = 200;
    temp = num[25];
    num[25] = num[0];
    num[0] = temp;
    printf("\n%d %d\n",num[0],num[25]);

    int marks[3][3] = {
        {94,48,29},
        {84,80,47},
        {55,20,85},
    };
    for(int i=0;i<3;i++){
        int total = 0 ;

        for(int j=0;j<3;j++){
            total += marks[i][j];
        }
        printf(" student %d ka total marks : %d\n",i+1,total);
    }
    return 0;
}