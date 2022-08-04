#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define NUM_100 100
#define NUM_10 10


/*
2. Criar um programa em C para preencher cada um dos arrays indicados abaixo:

A
100 99  98  97
0   1   2   3   ... …   99

B
200 198 196 194
0   1   2   3   ... …   99

C
10  20  30  40
0   1   2   3   ... …   99

D
10  12  14  16
0   1   2   3   ... …   9

a) Mostrar os dados.
*/

void A(){
    int Vetor[NUM_100], i = 0;

    for(i = 0; i < NUM_100; i++){
        Vetor[i] = NUM_100 - i;
        printf("%3iª posição \t-->\t %3i\n", (i+1), Vetor[i]);
        Sleep(100);
    }
}
void B(){
    int Vetor[NUM_100], i = 0;

    for(i = 0; i < NUM_100; i++){
        Vetor[i] = (NUM_100 * 2) - (i * 2);
        printf("%3iª posição \t-->\t %3i\n", (i+1), Vetor[i]);
        Sleep(100);
    }
}

void C(){
    int Vetor[NUM_100], i = 0;

    for(i = 0; i < NUM_100; i++){
        Vetor[i] = (i + 1) * 10;
        printf("%3iª posição \t-->\t %3i\n", (i+1), Vetor[i]);
        Sleep(100);
    }
}

void D(){
    int Vetor[NUM_10], i = 0;

    for(i = 0; i < NUM_10; i++){
        Vetor[i] = (i + 10) + i;
        printf("%3iª posição \t-->\t %3i\n", (i+1), Vetor[i]);
        Sleep(100);
    }
}

void main(){
    setlocale(LC_ALL, "Portuguese");

    A();
    system("pause");
    system("cls");
    B();
    system("pause");
    system("cls");
    C();
    system("pause");
    system("cls");
    D();
}
