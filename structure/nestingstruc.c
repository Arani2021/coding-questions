#include<stdio.h>
#include<string.h>
#include<stdbool.h>
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
        char ability[10];
    }legendarypokemon;
    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"Pressure");
    mewtwo.normal.hp=150;
    mewtwo.normal.attack=180;
    strcpy(mewtwo.normal.name,"Mewtwo");
    mewtwo.normal.tier='S';
    mewtwo.normal.speed=180;
    return 0;
}