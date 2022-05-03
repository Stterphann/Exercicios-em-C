#include<stdio.h>

int main () {

    double valor, minutos;

    printf ("Digite a quantidade de minutos: ");
    scanf ("%lf", &minutos);

    valor = 50.0;

    if (minutos < 100) {
        printf ("Valor a pagar R$ %.1lf", valor);
    }
    else {
        minutos = minutos - 100;
        valor = valor + (minutos * 2);
        printf ("Valor a pagar R$ %.1lf", valor);
    }


return 0;
}
