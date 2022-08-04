#include <stdio.h>
#include <locale.h>

/*
Exercício 2

Crie uma função em C, do tipo void, que receba um valor float e
uma percentagem de desconto e apresente o valor do desconto.
*/

void desconto(float valor, int desc){
    float total;
    total =( valor * ((float)desc/100));
    printf("O valor do desconto será de %.2f Euros.",total);

}

void main(){
    setlocale(LC_ALL,"Portuguese");
    float valor=0.0;
    int desc=0;

    puts("\t\tSISTEMA DE DESCONTOS\n\n");
    printf("Digite o valor do produto ou serviço em Euro: ");
    scanf("%f", &valor);
    printf("Digite o desconto do produto ou serviço: [%%] ");
    scanf("%i", &desc);

    desconto(valor, desc);
}
