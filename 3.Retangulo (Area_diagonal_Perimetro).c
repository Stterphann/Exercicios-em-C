#include <stdio.h>
#include <math.h>

int main()
{
double base, altura, perimetro, area, diagonal;

printf ("Base do retangulo: ");
scanf ("%lf", &base);

printf ("Altura do retangulo: ");
scanf ("%lf", &altura);

area = base * altura;
perimetro = 2 * (base + altura);
diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));

printf ("AREA = %.2lf\n", area);
printf ("DIAGONAL = %.2lf\n", diagonal);
printf ("PERIMETRO = %.2lf\n", perimetro);


}
