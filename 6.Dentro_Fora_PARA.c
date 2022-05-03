#include <stdio.h>

int main () {

    int x, i, n, dentro, fora;

    printf ("Quantos numeros voce vai digitar: ");
    scanf ("%d", &n);

    dentro = 0;
    fora = 0;

    for (i=0; i<n; i++){

    printf ("Digite um numero: ");
    scanf ("%d", &x);

        if (x < 10 || x > 20) {
            fora++;
        }
        else {
            dentro++;
        }
    }

    printf ("DENTRO = %d\n", dentro);
    printf ("FORA = %d\n", fora);

return 0;
}
