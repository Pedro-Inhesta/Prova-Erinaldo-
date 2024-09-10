/*Autor....................: Pedro Inhesta
  Data.....................: 09/09/2024
  Objetivo.................: receba o valor venal de um imóvel e calcule o valor do IPTU
/*

#include <stdio.h>

float calculaIPTU(float valorVenal) {
float iptu;

if (valorVenal <= 100000.00) {
    iptu = valorVenal * 0.01;
} else if (valorVenal <= 300000.00) {
    iptu = valorVenal * 0.015;
} else if (valorVenal <= 500000.00) {
    iptu = valorVenal * 0.02;
} else {
    iptu = valorVenal * 0.025;
}

return iptu;
}

int main() {
float valorVenal;

printf("Digite o valor venal do imóvel:R$ ");
scanf("%f", &valorVenal);

float iptu = calculaIPTU(valorVenal);
printf("O valor do IPTU é: R$ %.2f\n", iptu);

return 0;
}