#include <stdio.h>
#include <locale.h>
#include <time.h>

/*
Exerc�cio 3

Crie uma fun��o em C, do tipo void, que gere um n�mero aleat�rio
entre 0 e 50 e devolva a informa��o se o n�mero � par ou �mpar.
*/

void aleatorio(int num){

    num = rand()%51;
    printf("%i", num);
    if(num%2==0)puts("\nPar");
    else puts("\n�mpar");

}

void main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));

    int num=0;

    puts("\t\tGERANDO N�MEROS ALEAT�RIOS\n\n");
    puts("O programa ir� gerar um n�mero aleat�rio de 0 at� 50 e dizer se � par ou �mpar\n");

    aleatorio(num);
}
