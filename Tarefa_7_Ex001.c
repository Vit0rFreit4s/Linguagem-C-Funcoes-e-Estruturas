#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <windows.h>
#define NUM 10

/*
Exercício 1

Crie um programa em C que preencha uma matriz 10x10,
de forma aleatória com números entre 0 e 20, e mostre os
elementos da diagonal esquerda, os elementos da diagonal direita,
a soma dos elementos da diagonal esquerda e a soma dos elementos da diagonal direita.
*/

void Mostrar_Matriz(int matriz[NUM][NUM]){

    srand(time(NULL));

    int i = 0, j = 0;

    //Mostrar a Matriz
    puts("Os valores da matriz são:\n");
    for(i = 0; i < NUM; i++){
        for(j = 0; j < NUM; j++){
            matriz[i][j] = rand()%21;
            printf("[%2i]\t", matriz[i][j]);
            Sleep(100);
        }
        putchar('\n');
    }
    system("pause");
    //Mostrar as Diagonais
}

void Diagonal_Esquerda(int matriz[NUM][NUM]){

    int soma = 0, i = 0, j = 0;

    puts("Os valores da diagonal esquerda são:\n");
    for(i = 0; i < NUM; i++){
        printf("[%2i]\t", matriz[i][i]);
        soma += matriz[i][i];
        Sleep(100);
        }
    putchar('\n');

    printf("\nA soma dos valores da diagonal esquerda será:\t%i\n", soma);


    system("pause");


}


void Diagonal_Direita(int matriz[NUM][NUM]){

    int soma = 0, i = 0, j = 0;

    puts("Os valores da diagonal direita são:\n");
    for(i = 0; i < NUM; i++){
        printf("[%2i]\t", matriz[i][(NUM -1) - i]);
        soma += matriz[i][(NUM -1) - i];
        Sleep(100);
        }
    putchar('\n');

    printf("\nA soma dos valores da diagonal direita será:\t%i\n", soma);


    system("pause");


}


void main(){
    setlocale(LC_ALL, "Portuguese");
    int matriz [NUM][NUM], soma = 0, i = 0, j = 0;

    Mostrar_Matriz(matriz);
    system("cls");
    Diagonal_Esquerda(matriz);
    system("cls");
    Diagonal_Direita(matriz);

}
