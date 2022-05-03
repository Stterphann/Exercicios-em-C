#include <stdio.h>

int main () {

    int i, n;
    double a, b, resultado;

    printf ("Quantos casos voce vai digitar? ");
    scanf ("%d", &n);

    for (i=0; i<n; i++) {
        printf ("Digite o numerador: ");
        scanf ("%lf", &a);

        printf ("Digite o denominador: ");
        scanf ("%lf", &b);

        if (b == 0) {
            printf ("Divisao Impossivel\n\n");
        }
        else {
            resultado = a / b;
            printf ("Resultado = %.1lf\n\n", resultado);
        }
    }

    return 0;
}
