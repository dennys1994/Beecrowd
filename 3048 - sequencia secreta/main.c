#include <stdio.h>

int main() {

    int tam, i, marc = 0, aux = 0, atual;//tam = seq de num, marc = soma dos numeros marcados, aux=qual numero atual marcado,atual é o numero atual
    scanf("%d",&tam);
    for(i=0;i<tam;i++){
        scanf("%d",&atual);
        if(atual != aux){
            marc++;
            aux = atual;
        }
    }
    printf("%d\n", marc);
    return 0;
}
