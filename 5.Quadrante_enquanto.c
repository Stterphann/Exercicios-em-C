#include <stdio.h>

int main () {

    double x, y;

    printf ("Digite os valores das coordenadas X e Y:\n");
    scanf ("%lf", &x);
    scanf ("%lf", &y);

    while (x != 0 && y != 0) {

        if (x > 0 && y > 0){
            printf ("\nQUADRANTE 1");
        }
        else if (x < 0 && y > 0) {
            printf ("\nQUADRANTE 2");
        }
        else if (x < 0 && y < 0) {
            printf ("\nQUADRANTE 3");
        }
        else if (x > 0 && y < 0) {
            printf ("\nQUADRANTE 4");
        }
    printf ("\nDigite os valores das coordenadas X e Y:\n");
    scanf ("%lf", &x);
    scanf ("%lf", &y);
    }

        return 0;
    }
