#include <stdio.h>

void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}
void ler_texto(char *buffer, int length) {
fgets(buffer, length, stdin);
strtok(buffer, "\n");
}
int main()
{
    double media, idade1, idade2;
    char nome1[50], nome2[50];

    printf ("Dados da primeira pessoa?\n ");
    printf ("NOME: ");
    ler_texto (nome1, 50);
    printf ("IDADE: ");
    scanf ("%lf", &idade1);

    printf ("Dados da segunda pessoa?\n ");
    printf ("NOME: ");
    limpar_entrada();
    ler_texto (nome2, 50);
    printf ("IDADE: ");
    scanf ("%lf", &idade2);

    media = (idade1 + idade2) / 2;

    printf (" A media de idades de %s e %s corresponde a %.1lf anos.", nome1, nome2, media);

    return 0;
}
