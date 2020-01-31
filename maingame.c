#include <stdio.h>
#include "game.h"

int main(){

    status stat1;
    stat1.happiness = 100;
    stat1.hygiene = 100;
    stat1.health = 100;
    stat1.social = 100;
    stat1.money = 100;

    // int hap, hy, soc, hea, mon;
    // hap = 100;
    // hy = 100;
    // soc = 100;
    // hea = 100;
    // mon = 100;
    // int *happiness = &hap;
    // int *hygiene = &hy;
    // int *social = &soc;
    // int *health = &hea;
    // int *money = &mon;

    printf("Happiness : %i\n",stat1.happiness );
    printf("Social : %i\n",stat1.social );
    printf("Hygiene : %i\n",stat1.hygiene );
    printf("health : %i\n",stat1.health );
    printf("money : %i\n",stat1.money );

    makansate(&stat1, stat1.health);
    display(&stat1,stat1.happiness,stat1.social,stat1.hygiene,stat1.health,stat1.money);

    return 0;
}