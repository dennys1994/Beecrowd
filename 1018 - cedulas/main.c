#include <stdio.h>

int main() {

    int cedulas[7]={100,50,20,10,5,2,1};
    int saque;
    scanf("%d",&saque);
    int i, resto;
    printf("%d\n",saque);
    for(i=0;i<7;i++){
        resto = saque/cedulas[i];
        printf("%d nota(s) de R$ %d,00\n",resto,cedulas[i]);
        saque = saque%cedulas[i];
    }
    return 0;
}
