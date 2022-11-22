#include <stdio.h>


int main(){
/*A fórmula para calcular a área de uma circunferência é: area = π . raio2. Considerando para este problema que π = 3.14159:

- Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por π.*/
    float raio, pi;
    double area;
    pi = 3.14159;
    scanf("%f",&raio);
    area = pi*(raio*raio);
    printf("A=%.4f\n", area);


    return 0;
}
