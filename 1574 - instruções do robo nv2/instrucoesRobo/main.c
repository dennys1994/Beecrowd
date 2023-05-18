#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEFT -1
#define RIGHT 1


int main(){
    int t;//numero de testes
    int n;//numero de instruções
    int i,j,ret;

    int vet[100];
    int resultados[100];
    int pos;
    char entrada[12];

    scanf("%d",&t);
    for(i=0;i<t;i++){//numero de testes
        pos = 0;
        scanf("%d",&n);
        for(j=0;j<n;j++){//numero de instruções
            scanf("%s", &entrada);
            if(strncmp(entrada, "LEFT", 4) == 0 ){
                pos+=LEFT;
                vet[j]=LEFT;
            }
            else if(strncmp(entrada, "RIGHT", 5) == 0){
                pos+=RIGHT;
                vet[j]=RIGHT;
            }
            else{
                scanf("%s",&entrada);
                scanf("%d", &ret);
                pos+=vet[ret-1];
                vet[j]=vet[ret-1];
            }
        }
        resultados[i]=pos;
    }
    for(i=0;i<t;i++)
        printf("%d\n",resultados[i]);

    return 0;
}


