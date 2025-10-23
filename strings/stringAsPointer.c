#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "Hello sky";
    //char* ptr = str ;
    //ptr = "Hello code"
    char* p = str ;
    *p = 'p';
    printf("%s",str);

    return 0;
}