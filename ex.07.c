/*Autor....................: Pedro Inhesta
  Data.....................: 09/09/2024
  Objetivo.................: falar se o numero é par ou impar
*/

#include <stdio.h>

void verificaParOuImpar(int numero) {
if (numero % 2 == 0) {
printf("O número %d é par.\n", numero);
} else {
printf("O número %d é ímpar.\n", numero);
}
}

int main() {
int numero;

printf("Digite um número inteiro: ");
scanf("%d", &numero);

verificaParOuImpar(numero);

return 0;
}

