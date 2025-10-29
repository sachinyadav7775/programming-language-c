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
void change (pokemon* p){
    p->hp = 80;
    p->attack = 90;
    p->speed = 180;
    p->tier = 'S';
    strcpy(p->name,"sky");
   
    return;         
}

int main(){
    // pokemon pikachu;
    // pikachu.hp = 88;
    // pikachu.attack = 78;
    // pikachu.speed = 200;
    // pikachu.tier = 'S';
    // strcpy(pikachu.name,"pikachu");
      //int*x -> address of integer valur 
    // pokemon* x = &pikachu;
    // printf("%p\n",&pikachu.hp);
    // printf("%p\n",&pikachu.attack);
    // printf("%p\n",&pikachu.speed);
    // printf("%p\n",&pikachu.tier);
    // printf("%p\n",&pikachu.name);
     
    // printf("%p\n",x);
    
    pokemon pikachu;
    pikachu.hp = 88;
    pikachu.attack = 78;
    pikachu.speed = 200;
    pikachu.tier = 'S';
    strcpy(pikachu.name,"pikachu");

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);

    change(&pikachu);

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);

    return 0;
}