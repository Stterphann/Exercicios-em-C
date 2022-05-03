#include <stdio.h>

void ler_texto(char *buffer, int length) {
fgets(buffer, length, stdin);
strtok(buffer, "\n");
}

int main() {

    int hora;
    double valor, pagamento;
    char nome[50];

    printf ("Nome: ");
    ler_texto (nome, 50);

    printf ("Valor por hora: ");
    scanf ("%lf", &valor);

    printf ("Horas trabalhadas: ");
    scanf ("%d", &hora);

    pagamento = hora * valor;

    printf ("O pagamento para %s deve ser de %.2lf\n", nome, pagamento);

    return 0;
}
