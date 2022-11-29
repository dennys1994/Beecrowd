#include <stdio.h>

int main() {
    int n;
    int aux;
    char nome[10];
    char porc = '%';
    scanf("%d",&n);
    int i, u;
    int saq_bloq_ata_t[n][3];//totais
    int saq_bloq_ata[n][3];//efetivos
    for(i=0;i<n;i++){
        scanf("%s %d %d %d %d %d %d", &nome,
        &saq_bloq_ata_t[i][0],&saq_bloq_ata_t[i][1],&saq_bloq_ata_t[i][2],
        &saq_bloq_ata[i][0],&saq_bloq_ata[i][1],&saq_bloq_ata[i][2]);
    }
    double aux_totais, aux_efetivos;
    for(i=0;i<3;i++){
            aux_totais = 0;
            aux_efetivos = 0;
        for(u=0;u<n;u++){
                aux_totais+=saq_bloq_ata_t[u][i];
                aux_efetivos+=saq_bloq_ata[u][i];
        }
        if(i==0)
            printf("Pontos de Saque: %.2lf %c.\n", (aux_efetivos/aux_totais)*100, porc);
        else if(i==1)
            printf("Pontos de Bloqueio: %.2lf %c.\n", (aux_efetivos/aux_totais)*100, porc);
        else if(i==2)
            printf("Pontos de Ataque: %.2lf %c.\n", (aux_efetivos/aux_totais)*100, porc);
    }

    return 0;
}
