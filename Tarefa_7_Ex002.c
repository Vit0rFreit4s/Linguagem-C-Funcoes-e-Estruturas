#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <windows.h>
#define LINHA 3
#define COLUNA 3

/*
Exercício 2

Crie um programa em C que preencha uma matriz 3x3,
de forma aleatória com os valores “O” ou “X.
Contar quantas linhas, colunas, diagonais existem preenchidas com o mesmo caracter.
*/

void Jogo_do_Galo(){

    srand(time(NULL));
    char a[LINHA][COLUNA];
    int num = 0, i = 0, j = 0, iguais = 0;

    for(i = 0; i < LINHA; i++){
        for(j = 0; j < COLUNA; j++){
            num = rand()%2;

            switch(num){
                case 0:
                    a[i][j] = 'O';
                    break;
                case 1:
                    a[i][j] = 'X';
            }
            printf("[%c]\t", a[i][j]);

            }
            putchar('\n');
        }
    iguais += Contar_Linhas(a);
    iguais += Contar_Colunas(a);
    iguais += Contar_Diagonais(a);

    puts("\n\nContando os caracteres iguais!");
    printf("Temos %i linhas, colunas e diagonais com o mesmo caracter.\n\n", iguais);

}

int Contar_Linhas(char a [LINHA][COLUNA]){

    int i = 0, j = 0, iguais = 0;

    for(i = 0; i < LINHA; i++){
        if(a[i][j] == a[i][j + 1] && a[i][j+1] == a[i][j + 2]){
            iguais++;
            }
    }
    printf("\n%i linhas", iguais);
    return iguais;
}

int Contar_Colunas(char a [LINHA][COLUNA]){

    int i = 0, j = 0, iguais = 0;

    for(j = 0; j < COLUNA; j++){
        if(a[i][j] == a[i + 1][j] && a[i + 1][j] == a[i + 2][j]){
            iguais++;
        }
    }
    printf("\n%i colunas", iguais);
    return iguais;
}

int Contar_Diagonais(char a [LINHA][COLUNA]){

    int i = 0, iguais = 0;

   //diagonal esquerda

    if(a[i][i] == a[i + 1][i +1] && a[i + 1][i + 1] == a[i + 2][i +2]){
        iguais++;
    }

    //diagonal direita
    if(a[i][2 - i] == a[i +1][i +1] && a[i + 1][i + 1] == a[i + 2][i]){
        iguais++;
    }
    printf("\n%i diagonais", iguais);
    return iguais;
}


void main(){
    setlocale(LC_ALL, "Portuguese");

    Jogo_do_Galo();
    putchar('\n');
    system("pause");


}
