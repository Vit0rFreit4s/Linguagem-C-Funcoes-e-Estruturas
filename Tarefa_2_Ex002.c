#include <stdio.h>
#include <locale.h>

/*
Exercício 2

Crie uma função em C, do tipo void, que receba um caracter.
Valida se é F/f ou M/m e escreve feminino ou masculino ou inválido.
*/

void Sexo(char sexo){

    switch(sexo){
        case 'f':
        case 'F':
            puts("\nFEMININO");
            break;
        case 'm':
        case 'M':
            puts("\nMASCULINO");
            break;
        default:
            puts("\nINVÁLIDO");
    }
}

void main(){
    setlocale(LC_ALL,"Portuguese");
    char sex;

    puts("\t\tSexo do usuário...\n\n");

    printf("Digite seu sexo: [F/M] ");
    sex = getchar();

    Sexo(sex);

}
