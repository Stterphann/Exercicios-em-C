#include<stdio.h>

int main () {

    double x, y;

    printf ("Valor de X = ");
    scanf ("%lf", &x);

    printf ("Valor de Y = ");
    scanf ("%lf", &y);

    if (x >= 0 && y > 0) {
        printf ("\nQ1");
    }
    else if (x < 0 && y >= 0) {
        printf ("\nQ2");
    }
    else if (x <= 0 && y < 0) {
        printf ("\nQ3");
    }
    else if (x > 0 && y < 0) {
        printf ("\nQ4");
    }
    else {
        printf ("\nORIGEM");
    }

return 0;
}
