#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define NUM 10

/*
2. Criar um programa em C para preencher cada um dos arrays indicados abaixo:

A

10 9 8 7
0 1 2 3 ... … 9

B

20 18 16 14
0  1  2  3  ...  …  9

C

10 15 20 25
0  1  2  3  ...  …  9

D

1 3 5 7
0 1 2 3 ... … 9


a) Mostrar os dados.
*/

void A(){
    int Vetor[NUM], i;
    puts("\tPROGRAMA A\n");
    for(i = 0; i < NUM; i++){
        Vetor[i] = NUM - i;
        printf("%3iª posição \t-->\t %3i\n", (i+1), Vetor[i]);
        Sleep(100);
    }
}
void B(){
    int Vetor[NUM], i;
    puts("\tPROGRAMA B\n");
    for(i = 0; i < NUM; i++){
        Vetor[i] = (NUM - i) * 2;
        printf("%3iª posição \t-->\t %3i\n", (i+1), Vetor[i]);
        Sleep(100);
    }
}


void C(){
    int Vetor[NUM], i;
    puts("\tPROGRAMA C\n");
    for(i = 0; i < NUM; i++){
        Vetor[i] = NUM + (i * 5);
        printf("%3iª posição \t-->\t %3i\n", (i+1), Vetor[i]);
        Sleep(100);
    }
}


void D(){
    int Vetor[NUM], i;
    puts("\tPROGRAMA D\n");
    for(i = 0; i < NUM; i++){
        Vetor[i] = (i * 2) + 1;
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

