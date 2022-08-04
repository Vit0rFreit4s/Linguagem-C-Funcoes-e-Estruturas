#include <stdio.h>
#include <locale.h>
#include <time.h>

/*
Exercício 3

Crie uma função em C, do tipo void, que gere um número aleatório
entre 0 e 50 e devolva a informação se o número é par ou ímpar.
*/

void aleatorio(int num){

    num = rand()%51;
    printf("%i", num);
    if(num%2==0)puts("\nPar");
    else puts("\nÍmpar");

}

void main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));

    int num=0;

    puts("\t\tGERANDO NÚMEROS ALEATÓRIOS\n\n");
    puts("O programa irá gerar um número aleatório de 0 até 50 e dizer se é par ou ímpar\n");

    aleatorio(num);
}
