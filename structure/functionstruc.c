#include<stdio.h>
#include<string.h> 
#include<stdbool.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        int tier;
        char name[50];
    }pokemon;
    void change(pokemon* p){
    printf("%d",p.hp);
    return;
}
    pokemon pikachu;
    pikachu.hp=60;
    pikachu.attack=70;
    pikachu.speed=100;
    pikachu.tier='A';
    strcpy(pikachu.name,"Pikachu");
    printf("%d\n",pikachu.hp);
return 0;
}