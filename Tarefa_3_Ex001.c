#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define NUM 5

/*
Exercício 1

Crie uma programa em C, que receba 5 números inteiros e os armazene num array.
Crie um 2º array com os mesmos valores do 1º. Mostre os valores.
*/

void Vetor(){
    int vetor1 [NUM], vetor2 [NUM], i = 0;

    for(i = 0; i < NUM; i++){
        printf("Digite o %iº número: ", (i+1));
        scanf("%i", &vetor1[i]);
        vetor2[i] = vetor1[i];
    }
    for(i = 0; i < NUM; i++){
        printf("\nO %iº número do %iº array é: %i\nO %iº número do %iº array é: %i\n", (i+1), 1, vetor1[i], (i+1), 2, vetor2[i]);
        Sleep(2000);
    }
}


void main(){
    setlocale(LC_ALL, "Portuguese");
    Vetor();
}
