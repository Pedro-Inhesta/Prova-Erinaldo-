/*Autor....................: Pedro Inhesta
  Data.....................: 09/09/2024
  Objetivo.................: verifique se ele é um triângulo retângulo 
*/
#include <stdio.h>

void verificaTrianguloRetangulo(int a, int b, int c) {
int hipotenusa, lado1, lado2;

if (a >= b && a >= c) {
    hipotenusa = a;
    lado1 = b;
    lado2 = c;
} else if (b >= a && b >= c) {
    hipotenusa = b;
    lado1 = a;
    lado2 = c;
} else {
    hipotenusa = c;
    lado1 = a;
    lado2 = b;
}

if (hipotenusa * hipotenusa == lado1 * lado1 + lado2 * lado2) {
    printf("O triângulo é retângulo.\n");
}
}

int main() {
int lado1, lado2, lado3;

printf("Digite o primeiro lado do triângulo: ");
scanf("%d", &lado1);
printf("Digite o segundo lado do triângulo: ");
scanf("%d", &lado2);
printf("Digite o terceiro lado do triângulo (maior lado): ");
scanf("%d", &lado3);

verificaTrianguloRetangulo(lado1, lado2, lado3);

return 0;
}