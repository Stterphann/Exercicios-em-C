#include<stdio.h>

int main () {

    double precoproduto, qtd, recebido, troco, total;

    printf ("Preco unitario do produto: ");
    scanf ("%lf", &precoproduto);

    printf ("Quantidade comprada: ");
    scanf ("%lf", &qtd);

    printf ("Valor recebido: ");
    scanf ("%lf", &recebido);

    total = qtd * precoproduto;

    if (recebido >= total) {
        troco = recebido - total;
        printf ("\nTROCO: %.1lf", troco);
    }
    else (recebido < troco); {
        troco = total - recebido;
        printf ("\nDINHEIRO INSUFICINETE. FALTAM %.1lf REAIS\n", troco);

    }

return 0;
}
