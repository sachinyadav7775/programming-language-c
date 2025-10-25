#include<stdio.h>
int main(){
    int time = 20;
    if(time>30){
        printf("goodbey sky");
    }
    else{
        printf("Hello sky");
    }
    printf("\n");

    int x = 15;
    int y = 25;
    if(x > 10){
        printf("x is greater than 11\n");
        // Nested if
        if (y > 33){
            printf("y is also greater than 20\n");
        }
    }
    int X = 15;
    int Y = 25;
    if(X > 10){
        printf("X is greater than 10\n");
        // Nested if
        if(Y > 20){
            printf("Y is also greater than 20\n");
        }
    }
    int age = 20;
    bool isCitizen = true;
    if (age >= 18){
        printf("Old enough to vote.\n");
        if(isCitizen){
            printf("And you are a citizen, so you can vote!\n");
        }
        else{
            printf("But you must be a citizen to vote.\n");
        } 
    }
    else{
        printf("Not old enough to vote.\n");
    }
    int a = 200;
    int b = 33;
    int c = 500;
    if (a > b && c > a){
        printf("Both conditions are true\n");
    }
    int A = 200;
    int B = 33;
    int C = 500;
    if (A > B || A > C) {
        printf("At least one condition is true\n");
    }
    int n = 33;
    int m = 200;
    if (!(n > m)) { 
        printf("a is NOT greater than b\n");
    }
    return 0;
}