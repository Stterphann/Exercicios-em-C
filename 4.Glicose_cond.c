#include<stdio.h>

int main () {

    double glicose;

    printf ("Quantidade de glicose: ");
    scanf ("%lf", &glicose);

    if (glicose <= 100) {
        printf ("\nClassificacao: normal\n");
    }
    else if (glicose <=140) {
        printf ("\nClassificacao: elevado\n");
    }
    else {
        printf ("\nClassificacao: Diabetes\n");
    }

return 0;
}
