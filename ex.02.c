/*Autor....................: Pedro Inhesta
  Data.....................: 08/09/2024
  Objetivo.................: ano bissexto 
*/

#include <stdio.h>

int Bissexto(int ano) {
if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
return 1;
}
return 0;
}

int main() {
int ano;
printf("Digite um ano: ");
scanf("%d", &ano);

if (Bissexto(ano)) {
    printf("%d é um ano bissexto.\n", ano);
} else {
    printf("%d não é um ano bissexto.\n", ano);
}

return 0;
}