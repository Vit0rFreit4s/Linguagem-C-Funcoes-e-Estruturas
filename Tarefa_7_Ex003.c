#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <windows.h>
#define LINHA 5
#define COLUNA 5

/*
Exercício 3

Crie um programa em C que preencha uma matriz 5x5, de forma aleatória
com os valores “1”, “X” ou “2”. Sabendo que o “1” corresponde a vitória,
o “X” a empate e o “2” a derrota, apresentar uma contagem final das vitórias,
empates e derrotas.
*/


void Tabela(char matriz [LINHA][COLUNA]){

    srand(time(NULL));

    char a[LINHA][COLUNA];
    int num = 0, i = 0, j = 0, vit = 0, emp = 0, der = 0;

    for(i = 0; i < LINHA; i++){
        for(j = 0; j < COLUNA; j++){
            num = rand()%3;

            switch(num){
                case 0:
                    a[i][j] = '1';
                    break;
                case 1:
                    a[i][j] = 'X';
                    break;
                case 2:
                    a[i][j] = '2';
            }

            printf("%c\t", a[i][j]);

            if(a[i][j] == '1'){
                vit++;
            }
            else if(a[i][j] == 'X'){
                emp++;
            }
            else if(a[i][j] == '2'){
                der++;
            }
        }
        putchar('\n');
    }
    puts("\n\n\tQuadro de Estatísticas\n");
    printf("\t%i\tVitórias\n\t%i\tDerrotas\n\t%i\tEmpates\n", vit, der, emp);

}


void main(){
    setlocale(LC_ALL, "Portuguese");
    char matriz [LINHA][COLUNA];

    Tabela(matriz);


}
