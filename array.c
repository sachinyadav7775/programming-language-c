#include<stdio.h>
int main(){
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int totalpairs = 0;
    int x = 12 ;
    for(int i=0;i<=8;i++){                                             // [1]
        for(int j=i+1;j<=8;j++){
            if(arr[i]+arr[j] == x){
                totalpairs++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("%d\n",totalpairs);

    int Arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int Totaltripairs = 0;
    int y = 22 ;
    for(int i=0;i<=9;i++){                                             // [2]
        for(int j=i+1;j<=9;j++){
            for(int k=j+1;k<=9;k++){
                if(Arr[i]+Arr[j]+Arr[k] == y){
                    Totaltripairs++;
                    printf("(%d,%d,%d)\n",Arr[i],Arr[j],Arr[k]);
                }
            }
        }
    }
    printf("%d\n",Totaltripairs);

    int ARr[10] = {1,2,3,4,5,6,7,8,9,10};
    int Totalpairs = 0;
    int Z = 20 ;
    for(int i=0;i<=9;i++){
        for(int j=i+1;j<=9;j++){                                             // [3]
            for(int k=j+1;k<=9;k++){
                for(int l=k+1;l<=9;l++){
                    if(ARr[i]+ARr[j]+ARr[k]+ARr[l] == Z){
                        TotalTripairs++;
                        printf("(%d,%d,%d,%d)\n",ARr[i],ARr[j],ARr[k],ARr[l]);
                    }
            
                }
            }
                
        }
    }

    printf("%d\n",TotalTripairs);
    int ARR[10] = {1,2,3,4,5,6,7,8,9,10};
    int TotalPairs = 0;
    int r = 35 ;
    for(int i=0;i<=9;i++){
        for(int j=i+1;j<=9;j++){                                             // [4]
            for(int k=j+1;k<=9;k++){
                for(int l=k+1;l<=9;l++){
                    for(int i=l+1;i<=9;i++){
                        if(ARR[i]+ARR[j]+ARR[k]+ARR[l]+ARR[i] == r){
                            TotalPairs++;
                            printf("(%d,%d,%d,%d,%d)\n",ARR[i],ARR[j],ARR[k],ARR[l],ARR[i]);
                        }
                    }
            
                }
            }
                
        }
    }
    printf("%d\n",TotalPairs);

    return 0;
}