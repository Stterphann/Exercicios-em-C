#include <stdio.h>
#include <string.h>

int main () {

  int idade;
  double salario;
  char nome[50];
  char sexo;

  idade = 32;
  salario = 4560.5;
  strcpy (nome, "Maria Allencar");
  sexo = 'F';

  printf("A funcionaria %s, sexo %c, ganha %.2lf e tem %d anos\n", nome, sexo,salario, idade);


        return 0;
}
