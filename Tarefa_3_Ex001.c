#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define NUM 5

/*
Exerc�cio 1

Crie uma programa em C, que receba 5 n�meros inteiros e os armazene num array.
Crie um 2� array com os mesmos valores do 1�. Mostre os valores.
*/

void Vetor(){
    int vetor1 [NUM], vetor2 [NUM], i = 0;

    for(i = 0; i < NUM; i++){
        printf("Digite o %i� n�mero: ", (i+1));
        scanf("%i", &vetor1[i]);
        vetor2[i] = vetor1[i];
    }
    for(i = 0; i < NUM; i++){
        printf("\nO %i� n�mero do %i� array �: %i\nO %i� n�mero do %i� array �: %i\n", (i+1), 1, vetor1[i], (i+1), 2, vetor2[i]);
        Sleep(2000);
    }
}


void main(){
    setlocale(LC_ALL, "Portuguese");
    Vetor();
}
