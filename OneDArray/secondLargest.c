#include<stdio.h>
int main(){
    int arr[8] = {24,79,777,93,90,75,80,50};
    int max = 0 ;
    for(int i=0;i<=7;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("%d\n",max);

    return 0;
    
}