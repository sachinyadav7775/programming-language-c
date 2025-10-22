#include<stdio.h>
int main(){
    char arr[] = {'H','e','l','l','o','!'};
    // char ch = '\0'; // null charcter
    // int x = 0;
    //char a = (char)x; // a -> '\0'
    // printf("%c",a);
    int i = 0;
    while(arr[i]!='!'){
        printf("%c ",arr[i]);
        i++;
    }
    return 0;
}