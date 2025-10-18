#include<stdio.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int sumEven = 0 ;
    int sumOdd = 0 ;
    for(int i=0;i<=6;i++){
        if(i%2==0){
            sumEven += arr[i]; // 2+4+6=12
        }
        else{
            sumOdd += arr[i]; // 1+3+5+7=16
        }
    }
    int res = sumEven-sumOdd;
        printf("%d\n",res);
    return 0;
}