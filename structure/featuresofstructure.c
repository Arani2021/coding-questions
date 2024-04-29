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
    pokemon a, b, c;
    a.attack = 100;
    a.hp=100;
    a.speed=90;
    strcpy(a.name,"Blastoise");

    // b.attack=a.attack;
    // b.hp=a.hp;
    // b.tier=a.tier;

    b=a;//deep copy
    strcpy(b.name,"Venusaur");
    
    printf("%d\n",b.attack);
    printf("%s",b.name);


    return 0;
}
