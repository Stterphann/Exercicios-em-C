#include <stdio.h>

int main () {

    int gasolina, alcool, diesel, codigo;

    printf ("Digite um codigo: ");
    scanf ("%d", &codigo);

    gasolina = 0;
    alcool = 0;
    diesel = 0;

    while (codigo != 4) {
        if (codigo == 1){
            alcool = alcool + 1;
        }
            else if (codigo == 2) {
                    gasolina = gasolina + 1;

            }
                else if (codigo == 3) {
                        diesel = diesel + 1;
                }
    printf ("Digite um codigo: ");
    scanf ("%d", &codigo);
    }

    printf ("\nMUITO OBRIGADO\n");
    printf ("\nGASOLINA = %d", gasolina);
    printf ("\nALCOOL = %d", alcool);
    printf ("\nDIESEL = %d", diesel);

return 0;
}
