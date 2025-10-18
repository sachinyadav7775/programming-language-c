#include<stdio.h>
int main(){
    int arr[5];

    for(int i=0;i<=4;i++){                             // int [4 bytes use ]
        printf("enter element number %d\n",i+1);               // [1,Q]
        scanf("%d",&arr[i]);
    }

    for(int i=4;i>=0;i--){
        printf("%d ",arr[i]);
    }

    int marks[10] = {97,60,80,14,86,99,35,55,75,30};
    for(int i=0;i<10;i++){
        if(marks[i]<65){                                                // [2,Q]
            printf("%d ",i);
        }
    }

    return 0;
}