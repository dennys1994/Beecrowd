#include <stdio.h>
#include <stdlib.h>

int main(){
    int t, p, i, a = 0;// t = cha correto, p chute da pessoa, i = aux, a= total de acertos
    scanf("%d",&t);
    for(i=0;i<5;i++){
        scanf("%d",&p);
        if(t==p)
            a++;
    }
    printf("%d\n",a);


    return 0;
}
