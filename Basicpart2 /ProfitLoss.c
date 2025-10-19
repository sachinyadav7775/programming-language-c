#include<stdio.h>
int main(){
    int cp;
    printf("Enter cost Price :");
    scanf("%d",&cp);
     int sp;
    printf("Enter sellimg Price :");
    scanf("%d",&sp);
    if(sp>cp){
        printf("profit");
    }
    if(sp<cp){
        printf("loss");
    }
    if(sp==cp){
        printf("no profit, no loss");
    }

    return 0;
}