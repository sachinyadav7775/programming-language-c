#include<stdio.h>
/*void greet(){
    printf("hello sky@sachin \n");
    printf("how are you ? \n");
    return;
}
int main(){
    greet();
    greet();
    greet();
    return 0;
}*/
void japan(){
    printf("you are in japan \n");
    return;
}
void england(){
    printf("you are in england \n");
    japan();
    return ;
}
void australia(){
    printf("you are in australia \n");
    england();
    return ;
}
void london(){
    printf("you are in london \n");
    australia();
    return ;
}
void india(){
    printf("you are in india \n");
    london();
    return ;
}

int main(){
    india();

    return 0;
}