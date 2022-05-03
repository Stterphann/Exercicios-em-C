#include <stdio.h>

int main () {

    int i, n;
    double a, b, c, media;

    printf ("Quantos casos voce vai digitar? ");
    scanf ("%d", &n);

    for (i=0; i<n; i++) {
        printf ("Digite tres numeros: \n");
        scanf ("%lf", &a);
        scanf ("%lf", &b);
        scanf ("%lf", &c);

        media = (a*2 + b*3 + c*5) / 10;

        printf ("MEDIA = %.1lf\n\n", media);

    }

    return 0;
}
