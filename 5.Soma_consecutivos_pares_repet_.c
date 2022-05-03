#include <stdio.h>

int main () {

    int numero, soma;

    printf ("Digite um numero inteiro: ");
    scanf ("%d", &numero);

    while (numero > 0) {
        if (numero % 2 == 0) {
           soma = (numero * 5) + 20;
           printf ("SOMA = %d\n", soma);
        }
        else {
            soma = (numero + 1) * 5 + 20;
            printf ("SOMA = %d\n", soma);
        }

    printf ("Digite um numero inteiro: ");
    scanf ("%d", &numero);
    }

return 0;
}
