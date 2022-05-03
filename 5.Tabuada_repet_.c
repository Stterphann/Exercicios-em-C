#include <stdio.h>

int main () {

    int cont, numero, resultado;

    printf ("Deseja a tabuada para qual valor? ");
    scanf ("%d", &numero);

cont = 0;
    while (numero > 0 && cont < 10) {
    cont = cont + 1;
    resultado = numero * cont;

    printf ("\n%d x %d = %d", numero, cont, resultado);
    }

return 0;
}
