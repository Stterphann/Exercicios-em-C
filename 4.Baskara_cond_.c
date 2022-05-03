#include<stdio.h>

int main () {

    double a, b, c, delta, x1, x2;

    printf ("Coeficiente a: ");
    scanf ("%lf", &a) ;

    printf ("Coeficiente b: ");
    scanf ("%lf", &b);

    printf ("Coeficiente c: ");
    scanf ("%lf", &c);

    delta = (b * b) - 4 * a * c;

    if (delta < 0 || a == 0) {
        printf ("\nEsta equacao nao possui raizes reais.\n");
    }
    else {
        x1 = (-b + sqrt (delta)) / (2 * a);
        x2 = (-b - sqrt (delta)) / (2 * a);

       printf ("\nX1 = %lf\nX2 = %lf", x1, x2);
    }

return 0;
}
