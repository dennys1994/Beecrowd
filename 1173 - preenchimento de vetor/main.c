/*#include <stdio.h>
#include <stdlib.h>

int main(){
    int v; //numero de entrada
    int i;//limite do for
    int n[10];//vetor de 10 posições

    scanf("%d",&v);//le o valor que será armazenado no vetor
    n[0]=v;
    for(i=1;i<10;i++){
        n[i]=n[i-1]*2;
    }
    for(i=0;i<10;i++){
        printf("N[%d] = %d\n",i,n[i]);
    }
    return 0;
}
*/
int main () {

    long int v, i, n[10];

    scanf("%d",&v);
    n[0]= v;
    for (i=1;i<10;i++) {
        n[i]=n[i-1]*2;
        }
        for(i=0;i<10;i++) {
            printf ("N[%d] = %d\n",i,n[i]);
        }

return 0;}
