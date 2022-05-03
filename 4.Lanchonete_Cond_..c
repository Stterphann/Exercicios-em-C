#include<stdio.h>

int main () {

    double  quantidade, total;
    int codigo;

    printf ("Digite o codigo do produto: ");
    scanf ("%d", &codigo);

    printf ("Digite a quantidade comprada: ");
    scanf ("%lf", &quantidade);

    switch (codigo) {
    case 1:
        total = quantidade * 5.0;
        printf ("TOTAL = %lf\n", total);
        break;
    case 2:
        total = quantidade * 3.50;
        printf ("TOTAL = %lf\n", total);
        break;
    case 3:
        total = quantidade * 4.80;
        printf ("TOTAL = %lf\n", total);
        break;
    case 4:
        total = quantidade * 8.90;
        printf ("TOTAL = %lf\n", total);
        break;
    case 5:
        total = quantidade * 7.32;
        printf ("TOTAL = %lf\n", total);
        break;
    }

    return 0;
}
