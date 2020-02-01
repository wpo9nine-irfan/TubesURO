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
void belimakan(status*stat, int happiness, int money);
void bab(status*stat, int happiness, int health);
void makansate(status*stat, int health);
void pdkt(status*stat, int happiness, int money, int social);
void mandi(status*stat, int hygiene, int health);
void ngamen(status*stat, int money, int social);
void ikut_uro(status*stat, int social);
void rebahan(status*stat, int health, int happiness);
void ngewibu(status*stat, int social);
void ke_dokter(status*stat, int health, int hygiene);
void cobabundir(status*stat,int health, int social);
void belajar(status*stat, int happiness);
void display(status*stat, int happiness, int hygiene, int social, int health, int money);

#endif
