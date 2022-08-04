#include <stdio.h>
#include <locale.h>

/*
Exercício 1

Crie uma função em C, do tipo void, que receba 3 números e apresente o maior.
*/

void Maior(int a, int b, int c){

    putchar('\n');
    if(a == b && a == c){
        puts("Os três números são iguais!");
      }
    else{
        if(a > b){
            if (a > c){
                printf("O maior número apresentado é %i.", a);
            }
            else{
                printf("O maior número apresentado é %i.", c);
            }
        }
        else{
            if(b > c){
                printf("O maior número apresentado é %i.", b);
            }
            else{
                printf("O maior número apresentado é %i.", c);
            }
        }
    }
}

void main(){
    setlocale(LC_ALL,"Portuguese");
    int a, b, c;

    puts("\t\tEncontrando o maior valor... \n\n");
    printf("Digite o 1º valor inteiro: ");
    scanf("%i", &a);
    printf("Digite o 2º valor inteiro: ");
    scanf("%i", &b);
    printf("Digite o 3º valor inteiro: ");
    scanf("%i", &c);

    Maior(a, b, c);

    putchar('\n');

}
