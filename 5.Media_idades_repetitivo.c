#include <stdio.h>

int main ()
{

    int idades, somaidades, count;
    double mediaidades;

    printf ("Digite as idades:\n");
    scanf ("%d", &idades);

    count = 0;
    somaidades = 0;
    while (idades > 0){
        somaidades = idades + somaidades;
        count = count + 1;

        scanf ("%d", &idades);

    }
    if (count == 0){
        printf ("Impossível calcular\n");
    }
    else{
        mediaidades = (double) somaidades / count;

        printf ("Media Idades = %.2lf", mediaidades);
}

    return 0;
}
