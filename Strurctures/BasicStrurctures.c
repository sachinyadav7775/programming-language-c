#include<stdio.h>
int main(){
    struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier; // S , G , A , B , C , D
    };
    struct pokemon pikachu;
    // printf("Enter attack of pikachu : ");
    // scanf("%d",&pikachu.attack);       // user se input lena 
    pikachu.attack = 70;
    pikachu.hp = 80;
    pikachu.speed = 95;
    pikachu.tier = 'G';
    printf("%d\n",pikachu.attack);
    
    struct pokemon meena ;
    // printf("Enter attack of meena : ");
    // scanf("%d",&meena.speed);        // user se input lena 
    meena.attack = 70;
    meena.hp = 80;
    meena.speed = 95;
    meena.tier = 'S';
    printf("%c\n",meena.tier);

    return 0;
}