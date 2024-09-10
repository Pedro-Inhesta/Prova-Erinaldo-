/*Autor....................: Pedro Inhesta
  Data.....................: 09/09/2024
  Objetivo.................: verifique se é maior de idade ou não  
*/

#include <stdio.h>

void verificaMaioridade(int idade) {
if (idade >= 18) {
printf("Você é maior de idade.\n");
} else {
printf("Você é menor de idade.\n");
}
}

int main() {
int idade;

printf("Digite a sua idade: ");
scanf("%d", &idade);

verificaMaioridade(idade);

return 0;
}