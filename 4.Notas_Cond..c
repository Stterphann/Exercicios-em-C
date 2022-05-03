#include<stdio.h>

int main () {

    double nota1, nota2, media;

    printf ("Digite a primeira nota: ");
    scanf ("%lf", &nota1);

    printf ("Digite a segunda nota: ");
    scanf ("%lf", &nota2);

    media = (nota1 + nota2) / 2;

    if (media < 70.0) {
        printf ("\nNOTA FINAL = %.1lf\n REPROVADO\n", media);
    }

        else {
            printf ("\nNOTA FINAL = %.1lf", media);
        }


return 0;
}
