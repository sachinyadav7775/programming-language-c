#include<stdio.h>
int main(){
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);
    int i ;
    for(i=1;i<=n;i=i+3){
        ("hello sky\n");
    }
    printf("%d",i);

    int i ;
    for(i=1;i<=n;i++){
        if(i%2==0)
        printf("%d ",i);
    }

    int i ;
    for(i=1;i<=n;i++){
        if(i%3==0)
        printf("%d ",i);
    }
    
    return 0;
}

