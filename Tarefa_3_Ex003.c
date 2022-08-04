#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <time.h>
#define NUM 20


/*
Exercício 3

Crie uma programa em C, que gere 20 números aleatórios (entre 0 e 50),
e os armazene num array. Será solicitado ao utilizador um número entre 0 e 50
por forma a verificar se o mesmo se encontra no array. Se sim informa em que posição(ões)
senão escreve que o número não existe.
*/

void Aleatorios(){
    srand(time(NULL));
    int num_aleatorios [NUM], num, cond = 0, i;

    for(i = 0; i < NUM; i++){
        num_aleatorios [i] = rand()%51;
    }

    printf("Digite um número entre 0 e 50 para vermos se esse número foi sorteado e quantas vezes: ");
    scanf("%i", &num);
    putchar('\n');

    for(int i = 0; i < NUM; i++){
        if(num_aleatorios[i]==num){
            puts("**********************************************");
            printf("O número foi sorteado na posição: %i.\n", (i+1));
            puts("**********************************************\n");
            cond++;
        }
    }if(cond==0){
        puts("************************************");
        puts("Esse número não foi sorteado!!!");
        puts("************************************\n");
    }
    Sleep(1000);
    putchar('\n');
    for(int i = 0; i < NUM; i++){
        printf("Os números gerados foram: %iº número\t%2i\n", (i+1), num_aleatorios[i]);
        Sleep(500);
    }

}

void main(){
    setlocale(LC_ALL, "Portuguese");

    Aleatorios();
}
