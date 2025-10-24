#include<stdio.h>
int main(){
    int time = 20 ;
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
        printf("x is greater than 10\n");
        // Nested if
      if (y > 33) {
        printf("y is also greater than 20\n");
      }
    }

    return 0;
}