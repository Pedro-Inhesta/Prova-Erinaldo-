/*Autor....................: Pedro Inhesta
  Data.....................: 09/09/2024
  Objetivo.................: verificar se o aluno esta aprovado ou reprovado 
*/

#include <stdio.h>

void classificaNota(float nota) {
if (nota >= 7.0) {
printf("Aprovado\n");
} else {
printf("Reprovado\n");
}
}

int main() {
float nota;

printf("Digite a nota do aluno (0 a 10): ");
scanf("%f", &nota);

if (nota >= 0.0 && nota <= 10.0) {
    classificaNota(nota);
} else {
    printf("Nota inválida. Por favor, insira uma nota entre 0 e 10.\n");
}

return 0;
}

