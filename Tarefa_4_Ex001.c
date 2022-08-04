#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define NUM 100

/*
1. Dado o array VET, inteiro de 100 posições, desenvolver um programa em C para cada um dos itens abaixo:

a) preenchê-lo com o valor inteiro 30; mostrar os dados.
b) preenchê-lo com os números inteiros 1, 2, 3, ..., 100; mostrar os dados.
c) preencher VET(i ) com 1, se i é ímpar, e com 0 se for par; mostrar os dados.
*/

void Trinta(){
    int VET[NUM], i = 0;

    for(i = 0; i < NUM; i++){
        VET[i] = 30;
        printf("%3iª posição \t-->\t %3i\n", (i+1), VET[i]);
        Sleep(100);
    }
}

void Inteiros(){
    int VET[NUM], i = 0;

    for(i = 0; i < NUM; i++){
        VET[i] = i+1;
        printf("%3iª posição \t-->\t %3i\n", (i+1), VET[i]);
        Sleep(100);
    }
}

void Par_impar(){
    int VET[NUM], i = 0;

    for(i = 0; i < NUM; i++){
        VET[i] = i;
        if(VET[i] % 2 == 0){
            VET[i] = 0;
        }
        else{
            VET[i] = 1;
        }

    }
    for(i = 0; i < NUM; i++){
        printf("%3iª posição \t-->\t %3i\n", (i+1), VET[i]);
        Sleep(100);
    }
}

void main(){
    setlocale(LC_ALL, "Portuguese");

    Trinta();
    system("pause");
    system("cls");
    Inteiros();
    system("pause");
    system("cls");
    Par_impar();
}
