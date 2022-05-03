#include<stdio.h>

int main () {

    double salario, aumento, novosalario, p;

    printf ("Digite o salario da pessoa: ");
    scanf ("%lf", &salario);

    if  (salario <= 1000) {
        novosalario = salario + salario * 0.20;
        aumento = novosalario - salario;
        p = 20;

        printf ("\nNovo salario = %.1lf", novosalario);
        printf ("\nAumento = %.1lf", aumento);
        printf ("\nPercentual = %.1lf ", p);
    }
    else if (salario <= 3000) {
        novosalario = salario + salario * 0.15;
        aumento = novosalario - salario;
        p = 15;

        printf ("\nNovo salario = %.1lf", novosalario);
        printf ("\nAumento = %.1lf", aumento);
        printf ("\nPercentual = %.1lf ", p);
    }
    else if (salario <= 8000) {
        novosalario = salario + salario * 0.10;
        aumento = novosalario - salario;
        p = 10;

        printf ("\nNovo salario = %.1lf", novosalario);
        printf ("\nAumento = %.1lf", aumento);
        printf ("\nPercentual = %.1lf ", p);
    }
    else {
        novosalario = salario + salario * 0.05;
        aumento = novosalario - salario;
        p = 5;

        printf ("\nNovo salario = %.1lf", novosalario);
        printf ("\nAumento = %.1lf", aumento);
        printf ("\nPercentual = %.1lf ", p);
    }

 return 0;
}
