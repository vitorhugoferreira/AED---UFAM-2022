#include <stdio.h>
#include <string.h>

int main(){

    int i, j;
    int time1, time2;
    int rodada;
    char ultimos[] = "ABCDEFGHIJKLMNOP";

    rodada = 8;

    for(i = 0; i < 4; i++){
        
        char ganhadores[rodada];

        for(j = 0; j < rodada; j++){

            scanf("%d %d", &time1, &time2);

            if(time1 > time2){
                ganhadores[j] = ultimos[j*2];
            }else{
                ganhadores[j] = ultimos[j*2+1];
            }
        }
        strcpy(ultimos, ganhadores);
        rodada /=2;
    }

    printf("%c", ultimos[0]);
    
}