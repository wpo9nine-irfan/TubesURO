// #include <stdio.h>
#include <stdlib.h>
#include "game.h"
#include <stdio.h>

// konstruktor
void belimakan(status*stat, int happiness)
{
    happiness = happiness - 30;
}

void bab(status*stat, int happiness, int health){
    happiness(*stat) = happiness(*stat) + 10;
    health(*stat) = health(*stat) + 5;
}

void makansate(status*stat, int health){
    health(*stat) = health(*stat) - 10;
}

void display(status*stat, int happiness, int hygiene, int social, int health, int money){
    printf("Happiness : %i\n",happiness );
    printf("Social : %i\n",social );
    printf("Hygiene : %i\n",hygiene );
    printf("health : %i\n",health );
    printf("money : %i\n",money );
}

