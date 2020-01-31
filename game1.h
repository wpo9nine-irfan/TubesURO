#ifndef _GAME_H_
#define _GAME_H_

typedef struct 
{
    int happiness ;
    int hygiene ;
    int social;
    int health  ;
    int money ;
} status;

// Selektor
#define happiness(stat) (stat).happiness
#define hygiene(stat) (stat).hygiene
#define social(stat) (stat).social
#define health(stat) (stat).health
#define money(stat) (stat).money

// Konstruktor
void belimakan(status*stat, int happiness);

void bab(status*stat, int happiness, int health);

void makansate(status*stat, int health);

void display(status*stat, int happiness, int hygiene, int social, int health, int money);

#endif