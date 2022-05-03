#include <stdio.h>
#include <string.h>

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
    int idade1, idade2;
    char nome1[50], nome2[50];
    char sexo;

    printf("Digite o nome da primeira pessoa: ");
    ler_texto(nome1, 50);
    printf("Digite a idade da pessoa: ");
    scanf("%\d", &idade1);

    printf("Digite o nome da segunda pessoa: ");
    limpar_entrada();
    ler_texto(nome2, 50);
    printf("Digite a idade da pessoa: ");
    scanf("%\d", &idade2);

    printf ("Digite o sexo (F/M)");
    limpar_entrada ();
    scanf ("%c", &sexo);

    printf("\n");
    printf("Nome 1: %s\n", nome1);
    printf("Idade 1: %d\n", idade1);
    printf("Nome 2: %s\n", nome2);
    printf("Idade 2: %d\n", idade2);
    printf ("Sexo: %c\n", sexo);

    return 0;
}
