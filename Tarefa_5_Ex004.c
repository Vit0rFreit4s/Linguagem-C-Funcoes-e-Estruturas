#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define NUM 5



/*
4. Escrever um programa em C que:

a) Gere todo o conjunto A de 5 elementos inteiros entre 100 e 200;

b) Verificar se a soma dos elementos � um valor par ou �mpar.

c) Criar um 2� vetor obtido a partir do anterior que resulte no dobro dos valores do 1�.
*/

void A(){
    int i = 0, num = 0, soma= 0, Vetor_A[NUM], Vetor_B[NUM];;
    srand(time(NULL));

    for(i = 0; i < NUM; i++){
        Vetor_A[i] = 100 + rand()%101;
        Vetor_B[i] = Vetor_A[i] * 2;
        printf("%3i� posi��o \t-->\tsorteado: %3i\tprocessado: %3i\n", (i+1),Vetor_A[i], (Vetor_B[i]));
        Sleep(100);
        soma += Vetor_A[i];

    }
    if(soma % 2 == 0){
            printf("\nA soma dos n�meros gerados foi %i, que � um n�mero PAR!\n", soma);
    }
    else{
            printf("\nA soma dos n�meros gerados foi %i, que � um n�mero �MPAR!\n", soma);
    }


}

void main(){
    setlocale(LC_ALL, "Portuguese");

    A();
}
