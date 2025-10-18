#include<stdio.h>
int main(){
    int arr[5] = {2,4,5,9,3};
    printf("%d\n",arr[0]);
    float Arr[5] = {5.3,3.4,7.8,2.00,6.9};
    printf("%f\n",Arr[1]);
    char ARr[6] = {'a','j','i','?','v','@'};
    printf("%c\n",ARr[3]);

    int arr[4];                                                 //= {2,4,7,5,1};
    for(int i=0;i<4;i++){
        printf("Enter element number %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<4;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}