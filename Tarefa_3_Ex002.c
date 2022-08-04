#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define NUM 10

/*
Exercício 2

Crie uma programa em C, que guarde os 10 primeiros números pares
(2, 4, 6, 8, 10, 12, 14, 16, 18, 20). Mostre os números.
*/

void Pares(){
    int num_pares [NUM];

    for(int i = 0; i < NUM; i++){
        num_pares [i] = (i * 2) + 2 ;
        printf("O número armazenado na %iª posição é %i.\n", (i+1), num_pares[i]);
        Sleep(1000);
    }
}

void main(){
    setlocale(LC_ALL, "Portuguese");

    Pares();
}
