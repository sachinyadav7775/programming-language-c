#include<stdio.h>
int main(){
    int x ;
    printf("enter a number:");
    scanf("%d",&x);
    if(x%5==0){
    printf("divisible by 5");
    }
    else{
    printf("not divisible by 5");
    }

    int n ;
    printf("\nenter a number:");
    scanf("%d",&n);                                             // use by ||,&& //
    if(x%5==0 || n%3==0){
    printf("the number is divisible by 5 or 3 ");               // divisible //
    }
    else{
    printf("the number is not divisible by 5 or 3");
    }

    int y ;
    printf("\nenter a number:");
    scanf("%d",&y);
    if(x%20==0 || n%15==0){
    printf("the number is divisible by 20 or 15 ");
    }
    else{
    printf("the number is not divisible by 20 or 15");
    }

    int z ;
    printf("\nenter a number:");
    scanf("%d",&z);
    if(n<99 && n<1000){
    printf("it is a three digit number ");                        //three digit number //
    }
    else{
    printf("it is a no three digit number "); 
    } 

    int s , m , k ;
    printf("enter 1st number : ");
    scanf("%d",&s);
    printf("enter 2st number : ");                                  // greatest number //
    scanf("%d",&m);
    printf("enter 3st number : ");
    scanf("%d",&k);
    if(s>m && s>k ){
    printf("%d is greatest",s);
    }
    if(m>s && m>k ){
    printf("%dis greatest ",m);
    }
    if(k>s && k>m ){
    printf("%dis greatest ",k);
    }

    int a , b , c  , d;
    printf("\nenter 1st number : ");
    scanf("%d",&a);
    printf("enter 2st number : ");
    scanf("%d",&b);
    printf("enter 3st number : ");
    scanf("%d",&c);
    printf("enter 4st number : ");
    scanf("%d",&d);
    if(a>b && a>c && a>d ){
    printf("%d is greatest",a);
    }
    if(b>a && b>c && b>d ){
    printf("%d is greatest ",b);
    }
    if(c>a && c>b && c>d ){
    printf("%d is greatest ",c);
    }
    if(d>a && d>b && d>c ){
    printf("%d is greatesr ",d);   
    } 

    int sujeet ;
    printf("enter 1st age :");
    scanf("%d",&sujeet);
    int anurag ;
    printf("enter 2st age :");
    scanf("%d",&anurag);
    int sachin ;
    printf("enter 3st age :");
    scanf("%d",&sachin);
    if(sujeet<anurag && sujeet<sachin){
    printf("%d is youngest age ",sujeet);
    } 
    if(anurag<sujeet && anurag<sachin){
    printf("%d is youngest age ",anurag);
    }
    if(sachin<sujeet && sachin<anurag){
    printf("%d is youngest age\n",sachin);
    }
    
    return 0;
}