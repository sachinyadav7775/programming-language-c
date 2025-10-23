#include<stdio.h>
#include<string.h>
int main(){
    char s1[] = "Hello sky";
    char* s2 = s1;
    s1[0] = 'M';
    s1[7] = 80;
    printf("%s\n",s2);

    return 0;
}