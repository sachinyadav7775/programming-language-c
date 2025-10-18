/*#include<stdio.h>
int add(int x , int y){
    return x/y;
}
int main(){
    int a ;
    printf("enter 1st number : ");
    scanf("%d",&a);
    int b ;
    printf("enter 1st number : ");
    scanf("%d",&b);
    int sum = add(a,b)  ;
    printf("%d\n",sum);

    return 0;
}*/
#include<stdio.h>
#include<math.h>
int main(){
    int a ;
    printf("enter a number : ");
    scanf("%d",&a);
    int root = sqrt(a);
    printf("the square root is : %d",root);

    return 0;
}