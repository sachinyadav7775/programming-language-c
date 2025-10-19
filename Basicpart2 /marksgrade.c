#include<stdio.h>
int main(){
    int n ;
    printf("enter percentage :");
    scanf("%d",&n);
    if(n>90){
    printf("A grade\n");            // more than 90 ->A
    }                               // more than 89 ->B 
    else if(n>80){                  // more than 70 ->C
    printf("B grade\n");            // more than 60 ->D
    }
    else if(n>60){
    printf("C grade\n");
    }
    else if(n<40){
    printf("F grade\n");
    }

    return 0;
}