#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <windows.h>

/*
Exerc�cio 3

Crie uma fun��o em C, do tipo void, que gere um n�mero aleat�rio
entre 10 e 50 e devolva a informa��o se o n�mero � divis�vel por 5.
*/

void Div(int ale){

    printf("O n�mero aleat�rio gerado foi %i\n", ale);
    Sleep(1000);

    if(ale%5==0){
        puts("Esse n�mero � divis�vel por 5!\n");
    }
    else{
        puts("Esse n�mero n�o � divis�vel por 5!\n");
    }

}

void main(){

    setlocale(LC_ALL,"Portuguese");
    int num;
    srand(time(NULL));

    puts("\t\tGERANDO N�MEROS ALEAT�RIOS E SE S�O DIVIS�VEIS POR 5\n\n");

    num = rand()%41+10;

    Div(num);


}
