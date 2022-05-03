#include<stdio.h>

int main ()
{
    double faren, celsius;
    char escala;

    printf ("Voce vai digitar a temperatura em qual escala? C/F ");
    scanf ("%c", &escala);

    if (escala == 'F') {
        printf ("Digite a temperatura em Fahrenheit: ");
        scanf ("%lf", &faren);

        celsius = 5.0 / 9.0 * (faren - 32.0);
        printf ("Temperatura equivalente em Celsius = %.1lf graus", celsius);
    }
    else if (escala == 'C') {
        printf ("Digite a temperatura em Celsius: ");
        scanf ("%lf", &celsius);

        faren = 1.8 * (celsius + 32.0);
        printf ("Temperatura equivalente em Fahrenheit = %.1lf graus", faren);
    }


    return 0;
}
