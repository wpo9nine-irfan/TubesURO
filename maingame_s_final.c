#include <stdio.h>
#include "game_semifinal.h"

int main()
{
    status stat1;
    stat1.happiness = 50;
    stat1.hygiene = 50;
    stat1.health = 50;
    stat1.social = 50;
    stat1.money = 50;
    char dec;
    int mode;

    printf("Happiness : %i\n",stat1.happiness );
    printf("Social : %i\n",stat1.social );
    printf("Hygiene : %i\n",stat1.hygiene );
    printf("health : %i\n",stat1.health );
    printf("money : %i\n",stat1.money );

    while(stat1.health >= 0){
        printf("Masukkan mode : \n1. Makan sate\t\t2. Buang air besar(BAB)\n3. PDKT\t\t4. Mandi\n5. Ngamen\t\t6. Ikut URO\n");
        printf("7.Rebahan\t8. Ngewibu\n9. Check up ke dokter\t\t10. Mencoba Bunuh diri\n11. Belajar\t\t12. Beli makan");
        scanf("%i", &mode);
        switch(mode){
            case 1:
            {
                makansate(&stat1, stat1.health);
                printf(" \n");   
                break;
            }
            case 2:
            {
                bab(&stat1, stat1.happiness, stat1.health);
                break;
            }
            case 3:
            {
                pdkt(&stat1, stat1.happiness, stat1.money, stat1.social);
                break;
            }
            case 4:
            {
                mandi(&stat1, stat1.hygiene, stat1.health);
                break;
            }
            case 5:
            {
                ngamen(&stat1, stat1.money, stat1.social);
                break;
            }
            case 6:
            {
                ikut_uro(&stat1, stat1.social);
                break;
            }
            case 7:
            {
                rebahan(&stat1, stat1.health, stat1.happiness);
                break;
            }

            case 8:
            {
                ngewibu(&stat1, stat1.social);
                break;
            }
            case 9:
            {
                ke_dokter(&stat1, stat1.health, stat1.hygiene);
                break;
            }
            case 10:
            {
                cobabundir(&stat1, stat1.health, stat1.social);
                break;
            }
            case 11:
            {
                belajar(&stat1, stat1.happiness);
                break;
            }
            case 12:
            {
                belimakan(&stat1, stat1.happiness, stat1.money);
                break;
            }
            default:
            {
                break;
            }

        }
        if(stat1.happiness >= 100){
            stat1.happiness = 100;
            // printf(" Selamat ...");
        }
        else if(stat1.social >= 100){
            stat1.social = 100;
        }
        else if(stat1.health >= 100){
            stat1.health = 100;
        }else if(stat1.hygiene >= 100){
            stat1.hygiene = 100;
        }
        else if(stat1.money >= 100){
            stat1.money = 100;
        }
        else if(stat1.happiness <= 0){
            stat1.happiness = 0;
            // printf(" Selamat ...");
        }
        else if(stat1.social <= 0){
            stat1.social = 0;
        }
        else if(stat1.health <= 0){
            stat1.health = 0;
        }else if(stat1.hygiene <= 0){
            stat1.hygiene = 0;
        }
        else if(stat1.money <= 0){
            stat1.money = 0;
        }
        
        printf("\n");
        display(&stat1,stat1.happiness,stat1.social,stat1.hygiene,stat1.health,stat1.money);
        printf("\n");
    }
    
    return 0;
}
    


    
