#include <stdlib.h>
#include <stdio.h>
/* TIMES
A B C D E F G H I J K L M N O P

oitavas de finais 8 jogos
quartas 4 jogos
semi 2 jogos
*/
int main(){
    int jogos[15][2];
    int campeoes[8];
    int i, time;
    char easy = 'A';

    for(i=0;i<15;i++){
        scanf("%d%d",&jogos[i+1][0],&jogos[i+1][1]);
    }
    time = 0;
    for(i=0;i<8;i++){
        if(jogos[i][0]>jogos[i][1]){
            campeoes[i]=time;
        }
        else
            campeoes[i]=time+1;
        time+=2;
    }
    time=0;
    for(i=0;i<4;i++){
        if(jogos[i+8][0]>jogos[i+8][1])
           campeoes[i]=campeoes[time];
        else
           campeoes[i]=campeoes[time+1];
        time+=2;
    }
    time=0;
    for(i=0;i<2;i++){
        if(jogos[i+12][0]>jogos[i+12][1])
           campeoes[i]=campeoes[time];
        else
           campeoes[i]=campeoes[time+1];
        time+=2;
    }
    if(jogos[14][0]>jogos[14][1])
        printf("%d",campeoes[0]);
    else
        printf("%d",campeoes[1]);
    return 0;
}
