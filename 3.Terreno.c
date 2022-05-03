#include <stdio.h>
int main()
{
    double preco, largura, comprimento, area, valor;

    printf("Qual o comprimento do terreno? ");
    scanf("%lf", &comprimento);

    printf("Qual a largura do terreno? ");
    scanf("%lf", &largura);

    printf("Qual o preco do m2? ");
    scanf("%lf", &preco);

    valor = preco * comprimento * largura;
    area = comprimento * largura;

    printf("\nAREA DO TERRENO = %.1lf", area);
    printf("\nVALOR DO TERRENO = %.1lf", valor);
}
