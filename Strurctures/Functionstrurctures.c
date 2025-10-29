#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[20];
}pokemon;
void fun(pokemon p){
    printf("%d",p.hp);
    return ;
}
void change(pokemon p){
    p.hp = 70;
    p.attack = 388;
    p.speed = 333;
}
int main(){
    pokemon pikachu;
    pikachu.hp = 68;
    pikachu.attack = 188;
    pikachu.speed = 80;
    change(pikachu);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    //fun(pikachu);
    return 0;
}