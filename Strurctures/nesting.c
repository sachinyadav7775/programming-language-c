#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
         int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;

    typedef struct legendarypokemon{
        pokemon normal;
        char ability[200];
    }legendarypokemon;

    typedef struct godpokemon{
        legendarypokemon legend;
        int specialattack;
    }godpokemon;

    // godpokemon arceus;
    // arceus specialattack = 300;
    // strcpy(arceus.legend.ability,"Turn Anyone to stone");
    // arceus.legend.normal.attack = 400;

    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"pressre");
    mewtwo.normal.hp = 155;
    mewtwo.normal.attack =  100;
    strcpy(mewtwo.normal.name,"mewtwo");
    mewtwo.normal.speed = 105;
    mewtwo.normal.tier = 'S';

    return 0;
}