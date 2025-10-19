#include<stdio.h>
int factorial(int n){
    int fact = 1;
    for(int i=2;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}                                                        // {1}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("%d\n",fact);
    return 0;
}
int Factorial(int m){
    if(m==1 || m==0) return 1;
    int recAns = m*Factorial(m-1);
    return recAns;
}                                                        // {2}
int Main(){
    int m;
    printf("Enter a number : ");
    scanf("%d",&m);
    int fact = Factorial(m);
    printf("%d\n",fact);
    return 0;
}