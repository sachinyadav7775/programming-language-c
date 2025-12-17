#include<stdio.h>
void fun(int x[]){
    x[0] = 108;
    return;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    printf("%d\n",arr[1]);
    fun(arr);
    printf("%d\n",arr[0]);

    return 0;
}