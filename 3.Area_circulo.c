#include <stdio.h>


int main (){

    double raio, area, pi;

    pi = 3.14159;

    printf ("Digite o valor do raio do circulo: ");
    scanf ("%lf", &raio);

    area = raio * pi;

    printf ("AREA: %.2lf", area);

    return 0;

}
