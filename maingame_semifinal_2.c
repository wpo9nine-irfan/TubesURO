#include <stdio.h>
#include "main.h"

int main()
{
    status stat1;
    stat1.happiness = 50;
    stat1.hygiene = 50;
    stat1.health = 50;
    stat1.social = 50;
    stat1.money = 50;
    int mode;

     printf("===     ===     ===========     ===              ============");
    printf("\n===     ===     ===     ===     ===              ============");
    printf("\n===     ===     ===     ===     ===              ===      ===");
    printf("\n===========     ===========     ===              ===      ===");
    printf("\n===========     ===========     ===              ===      ===");
    printf("\n===     ===     ===     ===     ===              ===      ===");
    printf("\n===     ===     ===     ===     ============     ============");
    printf("\n===     ===     ===     ===     ============     ============\n\n");


    printf("\n                   =======                      ");
    printf("\n                 == +   + ==                    ");
    printf("\n                 ==       ==                hilmy udah mulai dewasa dia harus bisa mandiri    ");//wasa dia harus bisa mandiri)
    printf("\n                 == |___| ==                    ");
    printf("\n\n                    =====                       ");
    printf("\n                |...=====...|                   ");
    printf("\n                    =====                        ");
    printf("\n                    =====                       ");
    printf("\n                    |   |                       ");
    printf("\n                    |   |                       ");
    printf("\n                    =   =                       \n\n");

    printf("Happiness : %i\n",stat1.happiness );
    printf("Social : %i\n",stat1.social );
    printf("Hygiene : %i\n",stat1.hygiene );
    printf("health : %i\n",stat1.health );
    printf("money : %i\n",stat1.money );

    printf("\nMasukkan mode : \n1. Makan sate\t\t2. Buang air besar(BAB)\n3. PDKT\t\t\t4. Mandi\n5. Ngamen\t\t6. Ikut URO\n");
    printf("7.Rebahan\t\t8. Ngewibu\n9. Check up ke dokter\t10. Mencoba Bunuh diri\n11. Belajar\t\t12. Beli makan");

    while(stat1.health > 0 && stat1.health < 100 && stat1.happiness < 100 && stat1.hygiene < 100 && stat1.money < 100 && stat1.social < 100){
        printf("\n\nPilih Aktivitasmu HILMY!");
        printf("\nMasukkan angka aktivitasmu : ");
        scanf("%i", &mode);

        if(stat1.money == 0){
            stat1.health = stat1.health - 10;
        }
        if(stat1.happiness == 0){
            stat1.health = stat1.health - 10;
        }
        if(stat1.social == 0){
            stat1.health = stat1.health - 10;
        }
        if(stat1.hygiene == 0){
            stat1.health = stat1.health - 10;
        }
        switch(mode){
            case 1:
            {
                makansate(&stat1, stat1.health);
                printf(" \n");

                if(stat1.health > 100){
                    stat1.health = 100;
                }

                if(stat1.health < 0){
                    stat1.health = 0;
                }

                break;
            }
            case 2:
            {
                bab(&stat1, stat1.happiness, stat1.health);
                if(stat1.happiness > 100){
            stat1.happiness = 100;
        }
        if(stat1.health > 100){
            stat1.health = 100;
        }
                if(stat1.happiness < 0){
            stat1.happiness = 0;
        }
        if(stat1.health < 0){
            stat1.health = 0;
        }

                break;
            }
            case 3:
            {
                pdkt(&stat1, stat1.happiness, stat1.money, stat1.social);

                if(stat1.happiness > 100){
                    stat1.happiness = 100;
                }
                if(stat1.money > 100){
                    stat1.money = 100;

                }
                if(stat1.social > 100){
                    stat1.social = 100;
                }
                if(stat1.happiness < 0){
                    stat1.happiness = 0;
                }

                if(stat1.money < 0){
                    stat1.money = 0;
                }
                if(stat1.social < 0){
                    stat1.social = 0;
                }
                break;
            }
            case 4:
            {
                mandi(&stat1, stat1.hygiene, stat1.health);

                if(stat1.health > 100){
                    stat1.health = 100;
                }
                if(stat1.hygiene > 100){
                    stat1.hygiene = 100;
                }
                if(stat1.health < 0){
                    stat1.health = 0;
                }
                if(stat1.hygiene < 0){
                    stat1.hygiene = 0;
                }

                break;
            }
            case 5:
            {
                ngamen(&stat1, stat1.money, stat1.social);

                if(stat1.money > 100){
                    stat1.money = 100;
                }
                if(stat1.social > 100){
                    stat1.social = 100;
                }
                if(stat1.money < 0){
                    stat1.money = 0;
                }
                if(stat1.social < 0){
                    stat1.social = 0;
                }
                break;
            }
            case 6:
            {
                ikut_uro(&stat1, stat1.social);

                if(stat1.social > 100){
                    stat1.social = 100;
                }
                if(stat1.social < 0){
                    stat1.social = 0;
                }
                break;
            }
            case 7:
            {
                rebahan(&stat1, stat1.health, stat1.happiness);

                if(stat1.happiness > 100){
                    stat1.happiness = 100;
                }
                if(stat1.health > 100){
                    stat1.health = 100;
                }
                if(stat1.happiness < 0){
                    stat1.happiness = 0;
                }
                if(stat1.health < 0){
                    stat1.health = 0;
                }

                break;
            }

            case 8:
            {
                ngewibu(&stat1, stat1.social);

                if(stat1.social > 100){
                    stat1.social = 100;
                }
                if(stat1.social < 0){
                    stat1.social = 0;
                }
                break;
            }
            case 9:
            {
                ke_dokter(&stat1, stat1.health, stat1.hygiene);

                if(stat1.health > 100){
                    stat1.health = 100;
                }
                if(stat1.hygiene > 100){
                    stat1.hygiene = 100;
                }
                if(stat1.health < 0){
                    stat1.health = 0;
                }
                if(stat1.hygiene < 0){
                    stat1.hygiene = 0;
                }

                break;
            }
            case 10:
            {
                cobabundir(&stat1, stat1.health, stat1.social);

                if(stat1.health > 100){
                    stat1.health = 100;
                }
                if(stat1.social > 100){
                    stat1.social = 100;
                }
                if(stat1.health < 0){
                    stat1.health = 0;
                }
                if(stat1.social < 0){
                    stat1.social = 0;
                }
                break;
            }
            case 11:
            {
                belajar(&stat1, stat1.happiness);

                if(stat1.happiness > 100){
                    stat1.happiness = 100;
                }
                if(stat1.happiness < 0){
                    stat1.happiness = 0;
                }

                break;
            }
            case 12:
            {
                belimakan(&stat1, stat1.happiness, stat1.money);
                if(stat1.happiness > 100){
                    stat1.happiness = 100;
                }
                if(stat1.money > 100){
                    stat1.money = 100;
                }
                if(stat1.happiness < 0){
                    stat1.happiness = 0;
                }
                if(stat1.money < 0){
                    stat1.money = 0;
                }

                break;
            }
            default:
            {
                break;
            }
        }
        printf("\n");
        display(&stat1,stat1.happiness,stat1.social,stat1.hygiene,stat1.health,stat1.money);
        printf("\n");
    }

    if(stat1.health == 0){
            printf("\n             ===============================            ");
    printf("\n             ===============================            ");
    printf("\n                      |                                 ");
    printf("\n                      |                                 ");
    printf("\n                      |                                 ");
    printf("\n                      |                                 ");
    printf("\n                      |                                 ");
    printf("\n                      |                                 ");
    printf("\n                      |(ini tali)                       ");
    printf("\n                      |                                 ");
    printf("\n                      |                                 ");
    printf("\n                      |                                 ");
    printf("\n                      =                                 ");
    printf("\n                     ===                                ");
    printf("\n                    =====                               ");
    printf("\n                  =========                             ");
    printf("\n                =============                           ");
    printf("\n                 == x   x ==(hilmy just dead)           ");
    printf("\n                 ==       ==                            ");
    printf("\n                 ==   0   ==                            ");
    printf("\n                    =====                               ");
    printf("\n                |...=====...|                           ");
    printf("\n                    =====                               ");
    printf("\n                    =====                               ");
    printf("\n                    |   |                               ");
    printf("\n                    |   |                               ");
    printf("\n                    =   =                               ");
    printf("\n                                                        ");
    printf("\n                                                        ");
    printf("\nini tanah                                               ");
    printf("\n=================================================       ");
    printf("\n=================================================       \n\n");

    printf("\t|\\      /| ------ ------- -----  \n");
    printf("\t| \\    / | |    |    |      |    \n");
    printf("\t|  \\  /  | |----|    |      |    \n");
    printf("\t|   \\/   | |    |    |      |    \n");
    printf("\t|        | |    |    |      |    \n");
    printf("\t|        | |    |    |    -----  \n");

    printf("\n\t|Maaf Anda telah mati!|\n\n");
    //Credits...
    printf("Terima kasih sudah main game kami :) \n");
    printf("Game ini telah di buat oleh: \nMuhammad Pudja Gemilang - 16019055 \n");
    printf("Muhammad Ilyas Irfan S. - 16519517 \n");
    printf("Zivanka Nafisa Wongkaren - 16919369 \n\n");
    }

    if(stat1.happiness == 100 || stat1.health == 100 || stat1.hygiene == 100 || stat1.money == 100 || stat1.social == 100){
         printf("||        ||  ||   ||        ||  \n");
    printf(" ||      ||  ||||   ||      || \n");
    printf("  ||    ||  ||  ||   ||    || \n");
    printf("   ||  ||  ||    ||   ||  ||    \n");
    printf("     ||   ||======||    ||   \n");
    printf("     ||   ||      ||    ||    \n");
    printf("     ||   ||      ||    ||    \n");
    printf("     ||   ||      ||    ||    \n");
    printf("     ||   ||      ||    ||     \n\n");
    }

    if(stat1.happiness == 100){
        printf("Selamat Anda akhirnya mencapai yang cukup impossible!!! \nAkhirnya si dia membalas chatan dan kalian sudah berkencan selama 1 tahun! \nAnda datang kerumahnya untuk menanyanya 'Apakah mau menikah sama saya?' \nTetapi Anda terkejut.... ternyata si dia punya robot-cowo lain dan selama ini selingkuh :'( \nAnda jadi... forever jomblo XD \nSemangat!");

    }
    if(stat1.health == 100){
        printf("Selamat! Anda telah lulus kedokteran Universitas Robot Eva (URE)\ndan menjadi seorang dokter bedah yang sangat hebat! \nKesehatan benar-benar penting! \nCiee kedokterannn!!! \n\n");
    }
    if(stat1.hygiene == 100){
        printf("Selamat!! Anda telah menjadi seorang perawat. \nMaaf tapi Anda tidak lulus kedokteran :( \nTidak apa-apa, tidak usah beresah! \nAnda akan menjadi asisten dokter tersebut jadi... tetap jaga higenisnya ya :) \n\n");
    }
    if(stat1.money == 100){
         printf("Wah! Anda telah membangun beberapa bisnis terkenal yang cukup lebat dan makmur! \nSampai banyak yang ingin menjadi seperti Anda! \nJangan terlalu sombong ya... uangnya selalu ngalir!!!\n\n");
    }
    if(stat1.social == 100){
         printf("Wahh!! Hebat!! Anda telah menjadi Ketua BEM Universitas Robot Eva (URE)! \nBanyak ya teman-temannya? \nPasti paling populer!!! \nSeru ya berbakti kepada masyarakat universitas dengan jiwa yang sosial!!\n\n");
    }
    return 0;
}

