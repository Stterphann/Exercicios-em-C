#include<stdio.h>

int main (){

    double A, B, C, areatriangulo, areatrapezio, areaquadrado;

    printf ("Digite a medida A: ");
    scanf ("%lf", &A);

    printf ("Digite a medida B: ");
    scanf ("%lf", &B);

    printf ("Digite a medida C: ");
    scanf ("%lf", &C);

    areaquadrado = A * A;
    areatrapezio = ((A+B) * C) / 2;
    areatriangulo = A * B / 2;

    printf ("\nAREA DO QUADRADO = %.2lf\n", areaquadrado);
    printf ("AREA DO TRINGULO = %.2lf\n", areatriangulo);
    printf ("AREA DO TRAPEZIO = %.2lf\n", areatrapezio);


    return 0;
}
