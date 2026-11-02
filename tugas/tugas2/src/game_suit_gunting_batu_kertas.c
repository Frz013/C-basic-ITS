#include <stdio.h>

int main(void){
    int poin_player, poin_bot;
    char opsi_player, opsi_bot;
    int opsi_player_mati[3] = {0, 0, 0}; // G, M, S
    int opsi_bot_mati[3] = {0, 0, 0}; // G, M, S
    poin_player = poin_bot = 0;

    while (1==1){

        printf("Opsi tersedia: G:%d M:%d S:%d (jika 0 maka tersedia)\n", opsi_player_mati[0], opsi_player_mati[1], opsi_player_mati[2]);
        scanf(" %c", &opsi_player);

        if((opsi_player == 'G' && opsi_player_mati[0] == 1) ||
           (opsi_player == 'M' && opsi_player_mati[1] == 1) ||
           (opsi_player == 'S' && opsi_player_mati[2] == 1)){
            printf("Opsi tersebut sudah mati, silahkan pilih yang lain\n");
            continue;
        }

        if(opsi_player == 'G'){
            opsi_bot = (opsi_bot_mati[2] == 0) ? 'S' : 'G';
        } else if(opsi_player == 'M'){
            opsi_bot = (opsi_bot_mati[0] == 0) ? 'G' : 'M';
        } else if(opsi_player == 'S'){
            opsi_bot = (opsi_bot_mati[1] == 0) ? 'M' : 'S';
        }

        if(opsi_player == 'G'){
            if(opsi_bot == 'S'){
                poin_bot += 1;
                opsi_player_mati[0] = 1;
                printf("Bot menang pada ronde ini\n");
            } else if(opsi_bot == 'M'){
                poin_player += 1;
                opsi_bot_mati[1] = 1;
                printf("Player menang pada ronde ini\n");
            }
            
        } else if(opsi_player == 'M'){
            if(opsi_bot == 'G'){
                poin_bot += 1;
                opsi_player_mati[1] = 1;
                printf("Bot menang pada ronde ini\n");
            } else if(opsi_bot == 'S'){
                poin_player += 1;
                opsi_bot_mati[2] = 1;
                printf("Player menang pada ronde ini\n");
            }
            
        } else if(opsi_player == 'S'){   
            if(opsi_bot == 'M'){
                poin_bot += 1;
                opsi_player_mati[2] = 1;
                printf("Bot menang pada ronde ini\n");
            } else if(opsi_bot == 'G'){
                poin_player += 1;
                opsi_bot_mati[0] = 1;
                printf("Player menang pada ronde ini\n");
            }
        }

        printf("Opsi player: %c, Opsi bot: %c, Point player: %d, point bot: %d\n", opsi_player, opsi_bot, poin_player, poin_bot);

        if(poin_player == 2){
            printf("Player memenangkan match ini Point player: %d, point bot: %d\n", poin_player, poin_bot);
            break;
        } else if(poin_bot == 2){
            printf("Bot memenangkan match ini dengan Point player: %d, point bot: %d\n", poin_player, poin_bot);
            break;
        }


    }

}