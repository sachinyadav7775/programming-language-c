#include<stdio.h>
int main(){
/*int n ;
printf("Enter a number : ");
scanf("%d",&n);                               // 1 3 5 7 9 11 13 15 AP odd number  me 2*n-1 //
for(int i=1;i<=2*n-1;i=i+2){
printf("%d ",i);
}*/
int n ;
printf("Enter a number : ");
scanf("%d",&n);
for(int i=1;i<=3*n+1;i=i+3){                 //    3*n+1   //
printf("%d ",i);
}
    return 0;
}