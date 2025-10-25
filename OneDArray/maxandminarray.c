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
    
    int Arr[7] = {84,45,83,38,-940,89,92};
    int min = 1000 ;
    for(int i=0;i<=6;i++){
        if(min>Arr[i]){
            min = Arr[i];
        }
    }
    printf("%d\n",min);
    
    return 0;
}