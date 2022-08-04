#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define NUM 10



/*
3. Escrever um programa em C que:

a) Gere todo o conjunto A de 10 elementos inteiros entre 10 e 20;

b) Construa e imprima um outro conjunto B formado da seguinte maneira:

    -os elementos de índice par têm o valor de A dividido por 4;
    -os elementos de índice ímpar têm o valor de A multiplicado por 2.
*/

void A(){
    float Vetor_A[NUM], Vetor_B[NUM];
    int i = 0, num = 0;
    srand(time(NULL));

    for(i = 0; i < NUM; i++){
        Vetor_A[i] = 10 + rand()%11;
        if(i % 2 == 0){
            Vetor_B[i] = (Vetor_A[i]/4);
        }
        else{
            Vetor_B[i] = (Vetor_A[i]*2);
        }
        printf("%3iª posição \t-->\tsorteado: %.0f\tprocessado: %.2f\n", (i+1),Vetor_A[i], (Vetor_B[i]));
        Sleep(100);
    }
}

void main(){
    setlocale(LC_ALL, "Portuguese");

    A();
}
