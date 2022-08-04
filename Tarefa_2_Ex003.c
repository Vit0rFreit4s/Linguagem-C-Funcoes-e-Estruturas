#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <windows.h>

/*
Exercício 3

Crie uma função em C, do tipo void, que gere um número aleatório
entre 10 e 50 e devolva a informação se o número é divisível por 5.
*/

void Div(int ale){

    printf("O número aleatório gerado foi %i\n", ale);
    Sleep(1000);

    if(ale%5==0){
        puts("Esse número é divisível por 5!\n");
    }
    else{
        puts("Esse número não é divisível por 5!\n");
    }

}

void main(){

    setlocale(LC_ALL,"Portuguese");
    int num;
    srand(time(NULL));

    puts("\t\tGERANDO NÚMEROS ALEATÓRIOS E SE SÃO DIVISÍVEIS POR 5\n\n");

    num = rand()%41+10;

    Div(num);


}
