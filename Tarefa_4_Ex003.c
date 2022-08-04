#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <time.h>
#define NUM 100



/*
3. Escrever um programa em C que:

a) Gere todo o conjunto A de 100 elementos inteiros entre 0 e 20;
b) Construa e imprima um outro conjunto B formado da seguinte maneira:

    -os elementos de índice par têm o valor de A dividido por 2;
    -os elementos de índice ímpar têm o valor de A multiplicado por 3.
*/

void A(){
    float Vetor_A[NUM], Vetor_B[NUM];
    int i = 0, num = 0;
    srand(time(NULL));

    for(i = 0; i < NUM; i++){
        Vetor_A[i] = rand()%21;
        if(i % 2 == 0){
            Vetor_B[i] = (Vetor_A[i]/2);
        }
        else{
            Vetor_B[i] = (Vetor_A[i]*3);
        }
        printf("%3iª posição \t-->\tsorteado: %.2f\tprocessado: %.2f\n", (i+1),Vetor_A[i], (Vetor_B[i]));
        Sleep(100);
    }
}

void main(){
    setlocale(LC_ALL, "Portuguese");

    A();
}
