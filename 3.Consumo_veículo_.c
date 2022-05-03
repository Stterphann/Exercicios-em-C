#include<stdio.h>

int main (){

    double distancia, combustivel, consumo;

    printf ("Distancia percorrida: ");
    scanf ("%lf", &distancia);

    printf ("Combustivel gasto: ");
    scanf ("%lf", &combustivel);

    consumo = (distancia / combustivel);

    printf ("Consumo medio = %.2lf km/l\n", consumo);

    return 0;

}
