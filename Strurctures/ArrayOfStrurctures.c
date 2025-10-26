#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;

    pokemon arr[4];
    // arr[0] , arr[1] , arr[2] , arr[3]
    arr[0].hp = 83;
    arr[0].attack = 90;
    arr[0].speed = 140;
    arr[0].tier = 'A';
    strcpy(arr[0].name ,"Sky");

    arr[1].hp = 70;
    arr[1].attack = 80;
    arr[1].speed = 240;
    arr[1].tier = 'S';
    strcpy(arr[1].name ,"Meena");

    arr[2].hp = 98;
    arr[2].attack = 75;
    arr[2].speed = 180;
    arr[2].tier = 'G';
    strcpy(arr[2].name ,"Pikachu");

    arr[3].hp = 77;
    arr[3].attack = 88;
    arr[3].speed = 150;
    arr[3].tier = 'B';
    strcpy(arr[3].name ,"Mewtwo");

    for(int i=0;i<4;i++){
        printf("name : %s\n",arr[i].name);
        printf("tier : %c\n",arr[i].tier);
        printf("hp : %d\n",arr[i].hp);
        printf("speed : %d\n",arr[i].speed);
        printf("attack  :%d\n",arr[i].attack);
        printf("\n");
    }

    return 0;
}