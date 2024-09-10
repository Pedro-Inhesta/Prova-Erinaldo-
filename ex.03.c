/*Autor....................: Pedro Inhesta
  Data.....................: 09/09/2024
  Objetivo.................: triangulo valido 
*/

#include <stdio.h>

int verifica_triangulo(int lado1, int lado2, int lado3) {
if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
return 1;
}
}

int main() {
int lado1, lado2, lado3;

printf("Digite o primeiro lado: ");
scanf("%d", &lado1);
printf("Digite o segundo lado: ");
scanf("%d", &lado2);
printf("Digite o terceiro lado: ");
scanf("%d", &lado3);

if (verifica_triangulo(lado1, lado2, lado3)) {
    printf("Os lados %d, %d e %d formam um triângulo válido.\n", lado1, lado2, lado3);
} else {
    printf("Os lados %d, %d e %d não formam um triângulo válido.\n", lado1, lado2, lado3);
}

return 0;
}