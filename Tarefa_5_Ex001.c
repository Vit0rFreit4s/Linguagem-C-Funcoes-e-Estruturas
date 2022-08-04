#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define NUM 20

/*
1. Dado o array VET, inteiro de 20 posições, desenvolver um programa em C para cada um dos itens abaixo:

a) preenchê-lo com o valor do (índice+1).
b) preenchê-lo com os números inteiros 1, 2, 3, ..., 20; mostrar os dados.
c) preencher VET(i ) com 10, se i é ímpar, e com 20 se for par; mostrar os dados.
*/

void A(){
    int VET[NUM], i;
    puts("\tPROGRAMA A\n");
    for(i = 0; i < NUM; i++){
        VET[i] = i + 1;
        printf("%2iª posição --> %2i\n", i+1, VET[i]);
        Sleep(500);
    }
}
void B(){
    int VET[NUM], i;
    puts("\tPROGRAMA B\n");
    for(i = 0; i < NUM; i++){
        VET[i] = i + 1;
        printf("%2iª posição --> %2i\n", i+1, VET[i]);
        Sleep(500);
    }
}
void C(){
    int VET[NUM], i;
    puts("\tPROGRAMA C\n");
    for(i = 0; i < NUM; i++){
        if(i % 2 == 0){
            VET[i] =20;
        }
        else{
            VET[i] =10;
        }
        printf("%2iª posição --> %2i\n", i+1, VET[i]);
        Sleep(500);
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

}
