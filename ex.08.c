/*Autor....................: Pedro Inhesta
  Data.....................: 09/09/2024
  Objetivo.................:  calcular o imposto sobre um salário com base no valor recebido
/*

#include <stdio.h>

void calculaImposto(float salario) {
float imposto;

if (salario > 5000.00) {
    imposto = salario * 0.20;
} else {
    imposto = salario * 0.10;
}

printf("O valor do imposto a ser pago é: R$ %.2f\n", imposto);
}

int main() {
float salario;

printf("Digite o valor do salário: ");
scanf("%f", &salario);

calculaImposto(salario);

return 0;
}
