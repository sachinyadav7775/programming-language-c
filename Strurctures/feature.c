#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[20];
    }pokemon;

    pokemon a,b,c;
    a.attack = 389;
    a.speed = 200;
    a.hp = 325;
    a.tier = 'S';
    strcpy(a.name,"sky");

    // b.hp = a.hp;
    // b.attack  = a.attack;
    // b.speed = a.speed;
    // b.tier = a.tier;
    // strcpy(b.name,a.name);

    b = a; // deep copy
    c = b;
    // c = a;
    // c.attack = 499;
    printf("%s\n",b.name);
    printf("%d\n",c.attack);
    printf("%c\n",a.tier);

    return 0;
}