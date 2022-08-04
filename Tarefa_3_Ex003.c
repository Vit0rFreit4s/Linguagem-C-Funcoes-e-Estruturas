#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <time.h>
#define NUM 20


/*
Exerc�cio 3

Crie uma programa em C, que gere 20 n�meros aleat�rios (entre 0 e 50),
e os armazene num array. Ser� solicitado ao utilizador um n�mero entre 0 e 50
por forma a verificar se o mesmo se encontra no array. Se sim informa em que posi��o(�es)
sen�o escreve que o n�mero n�o existe.
*/

void Aleatorios(){
    srand(time(NULL));
    int num_aleatorios [NUM], num, cond = 0, i;

    for(i = 0; i < NUM; i++){
        num_aleatorios [i] = rand()%51;
    }

    printf("Digite um n�mero entre 0 e 50 para vermos se esse n�mero foi sorteado e quantas vezes: ");
    scanf("%i", &num);
    putchar('\n');

    for(int i = 0; i < NUM; i++){
        if(num_aleatorios[i]==num){
            puts("**********************************************");
            printf("O n�mero foi sorteado na posi��o: %i.\n", (i+1));
            puts("**********************************************\n");
            cond++;
        }
    }if(cond==0){
        puts("************************************");
        puts("Esse n�mero n�o foi sorteado!!!");
        puts("************************************\n");
    }
    Sleep(1000);
    putchar('\n');
    for(int i = 0; i < NUM; i++){
        printf("Os n�meros gerados foram: %i� n�mero\t%2i\n", (i+1), num_aleatorios[i]);
        Sleep(500);
    }

}

void main(){
    setlocale(LC_ALL, "Portuguese");

    Aleatorios();
}
