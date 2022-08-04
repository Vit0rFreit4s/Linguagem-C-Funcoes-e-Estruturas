#include <stdio.h>
#include <locale.h>

/*
Exercício 1

Crie uma função em C, do tipo void, que receba a nota final de um aluno (entre 0 e 20)
e escreva “Aprovado” (Se maior do que 12), “Exame” (Entre 10 e 12), “Reprovado” (Se menor do que 10).
*/

void nota_final(float n1){

    if(n1 >= 0 && n1 <= 20){
        printf("A nota final do aluno é %.2f. E a situação é:\n", n1);
        if(n1 > 12){
            printf("APROVADO!\n");
        }
        else if(n1 >= 10 && n1 <= 12){
            printf("EXAME!\n");
        }
        else{
            printf("REPROVADO!\n");
        }
    }
    else{
        puts("Entrada inválida, tente novamente... ");
    }
}

void main(){
    setlocale(LC_ALL,"Portuguese");
    float nota=0.0;

    puts("\t\tSISTEMA DE SITUAÇÃO DO ALUNO\n\n");
    printf("Digite a nota final do aluno: ");
    scanf("%f", &nota);

    nota_final(nota);
}
