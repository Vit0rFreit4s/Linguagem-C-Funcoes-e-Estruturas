#include <stdio.h>
#include <locale.h>

/*
Exerc�cio 1

Crie uma fun��o em C, do tipo void, que receba 3 n�meros e apresente o maior.
*/

void Maior(int a, int b, int c){

    putchar('\n');
    if(a == b && a == c){
        puts("Os tr�s n�meros s�o iguais!");
      }
    else{
        if(a > b){
            if (a > c){
                printf("O maior n�mero apresentado � %i.", a);
            }
            else{
                printf("O maior n�mero apresentado � %i.", c);
            }
        }
        else{
            if(b > c){
                printf("O maior n�mero apresentado � %i.", b);
            }
            else{
                printf("O maior n�mero apresentado � %i.", c);
            }
        }
    }
}

void main(){
    setlocale(LC_ALL,"Portuguese");
    int a, b, c;

    puts("\t\tEncontrando o maior valor... \n\n");
    printf("Digite o 1� valor inteiro: ");
    scanf("%i", &a);
    printf("Digite o 2� valor inteiro: ");
    scanf("%i", &b);
    printf("Digite o 3� valor inteiro: ");
    scanf("%i", &c);

    Maior(a, b, c);

    putchar('\n');

}
