#include<stdio.h>

int main () {

    int duracao, horas, minutos, segundos, resto;

    printf ("Digite a duracao: ");
    scanf ("%d", &duracao);

    horas = duracao / 3600;
    resto = duracao % 3600;

    minutos = resto / 60;
    segundos = resto % 60;

    printf ("\n%d:%d:%d\n", horas, minutos, segundos);



return 0;
}
