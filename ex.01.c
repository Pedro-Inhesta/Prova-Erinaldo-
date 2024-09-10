/*Autor....................: Pedro Inhesta
  Data.....................: 08/09/2024
  Objetivo.................: numero primo
*/

#include <stdio.h>

int ehPrimo(int num) {
    if (num == 2 || num == 3 || num == 5 || num == 7) {
        return 1;
    }
    return 0;
}

int main() {
    int numero;
    printf("Digite um número entre 1 e 10: ");
    scanf("%d", &numero);

    if (ehPrimo(numero)) {
        printf("%d é um número primo.\n", numero);
    }
    if (numero < 1 || numero > 10) {
        printf ("Numero Invalido");
    }
        
    

    return 0;
}
