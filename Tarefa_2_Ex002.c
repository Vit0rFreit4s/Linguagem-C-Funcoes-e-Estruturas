#include <stdio.h>
#include <locale.h>

/*
Exerc�cio 2

Crie uma fun��o em C, do tipo void, que receba um caracter.
Valida se � F/f ou M/m e escreve feminino ou masculino ou inv�lido.
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
            puts("\nINV�LIDO");
    }
}

void main(){
    setlocale(LC_ALL,"Portuguese");
    char sex;

    puts("\t\tSexo do usu�rio...\n\n");

    printf("Digite seu sexo: [F/M] ");
    sex = getchar();

    Sexo(sex);

}
