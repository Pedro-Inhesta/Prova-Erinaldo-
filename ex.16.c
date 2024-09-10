/*Autor....................: Pedro Inhesta
  Data.....................: 10/09/2024
  Objetivo.................: e classifique o desempenho acadêmico de um aluno com base em sua nota final
/*
#include <stdio.h>

void classificaDesempenho(float nota) {
if (nota >= 9.0 && nota <= 10.0) {
printf("Classificação: A\n");
} else if (nota >= 7.0 && nota < 9.0) {
printf("Classificação: B\n");
} else if (nota >= 5.0 && nota < 7.0) {
printf("Classificação: C\n");
} else if (nota >= 0.0 && nota < 5.0) {
printf("Classificação: D\n");
} else {
printf("Erro: Nota fora do intervalo válido (0 a 10).\n");
}
}

int main() {
float nota;

printf("Digite a nota final do aluno (0 a 10): ");
scanf("%f", &nota);

classificaDesempenho(nota);

return 0;
}