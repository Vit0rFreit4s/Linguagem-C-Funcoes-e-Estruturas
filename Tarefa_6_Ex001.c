#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define NOTA 10

/*

Pretende-se:
-Criar um programa em C com uma estrutura de menu idêntica à abaixo apresentada:

*** Notas de Alunos ***
1- Recolha de notas
2- Mostrar todas as notas
3- Mostrar a média das notas
4- Alterar uma nota(indicando a posição)
5- Mostrar a(s) nota(s) mais alta(s)
6- Mostrar os aprovados (nota >=10)
7- Mostrar os reprovados (nota <10)
8- Mostrar as notas em cascata
9 - Ordenar notas em decrescente
0- Sair

Notas:
1.O array tem 10 elementos e é do tipo float.
2.As notas situam-se entre 0 e 20.

*/

void Painel(){
    puts("\t\t\t\t ***** SISTEMA DE NOTAS *****\n");
    puts("***************************************************\n");
    puts("\t*** Notas de Alunos ***\n");
    puts("\t 1 - Recolha de notas\n");
    puts("\t 2 - Mostrar todas as notas\n");
    puts("\t 3 - Mostrar a média das notas\n");
    puts("\t 4 - Alterar uma nota\n");
    puts("\t 5 - Mostrar a(s) nota(s) mais alta(s)\n");
    puts("\t 6 - Mostrar os aprovados\n");
    puts("\t 7 - Mostrar os reprovados\n");
    puts("\t 8 - Ordenar notas em crescente\n");
    puts("\t 9 - Ordenar notas em decrescente\n");
    puts("\t0 - Sair\n");
    puts("***************************************************\n\n");
}
//1
void Ler_Notas(float notas[]){
    int i = 0;

    system("cls");

    puts("As notas devem estar entre 0 e 20!\n");
    for(i = 0; i < NOTA; i++){
        printf("Digite a %iª Nota: ", i + 1);
        scanf("%f", &notas[i]);
        if(notas[i] < 0 || notas[i] > 20){
            puts("Nota inválida, digite novamente!");
            i--;
        }

    }
    system("pause");
    system("cls");
    Painel();

}
//2
void Mostrar_Notas(float notas[]){
    int i = 0;

    system("cls");


    for(i = 0; i < NOTA; i++){
        printf("%iª Nota:\t%.2f\n", i+1, notas[i]);
    }
    system("pause");
    system("cls");
    Painel();
}
//3
void Media_Notas(float notas[]){
    int i = 0;
    float soma = 0;

    system("cls");

    for(i = 0; i < NOTA; i++){
        soma += notas[i];
    printf("%iª Nota:\t%.2f\n", i+1, notas[i]);
    }
    puts("****************************************************");
    printf("A média de todas as notas será %.2f\n", soma/NOTA);
    puts("****************************************************");
    system("pause");
    system("cls");
    Painel();
}
//4
void Alterar_Notas(float notas[]){
    int i = 0, posicao = 0;
    float nova_nota;
    char opcao;

    system("cls");


    do{
        printf("\nIndique a posição que quer alterar a nota: ");
        fflush(stdin);
        scanf("%i", &posicao);
        printf("\nIndique a nova nota: ");
        fflush(stdin);
        scanf("%f", &nova_nota);

        if(nova_nota < 0 || nova_nota > 20){
            puts("Nota inválida, refaça o processo!");
            opcao = 's';
        }
        if(posicao < 1 || posicao > NOTA){
            puts("Posição inválida, refaça o processo!");
            opcao = 's';
        }
        else{
            notas[posicao - 1] = nova_nota;
            printf("\nDeseja alterar mais alguma nota? [S/N] ");
            fflush(stdin);
            scanf("%c", &opcao);
        }

    }while(opcao == 's' || opcao == 'S');
    putchar('\n');
    system("pause");
    system("cls");
    Painel();
}
//5
void Maior_Notas(float notas[]){
    int i = 0, qtd = 0;
    float  maior = 0;

    system("cls");

    for(i = 0; i < NOTA; i++){
        if(notas[i] > maior){
            maior = notas[i];
            qtd = 1;
        }
        else if(notas[i] == maior){
            qtd ++;
        }
    }
    printf("\n\nA maior nota é %.2f e temos %i nota(s) iguais a maior!\n", maior, qtd);
    system("pause");
    system("cls");
    Painel();
}
//6
void Aprovado(float notas[]){
    int i = 0, aprovados = 0;

    system("cls");

    for(i = 0; i < NOTA; i++){
        if(notas[i] >= 10){
            printf("\nO %i aluno está APROVADO! Com a nota %.2f.\n", i+1, notas[i]);
            aprovados++;
        }
    }
        if(aprovados == 0){
            puts("Nenhum aluno foi APROVADO!");
    }
    putchar('\n');
    system("pause");
    system("cls");
    Painel();
}
//7
void Reprovado(float notas[]){
    int i = 0, reprovado = 0;

    system("cls");

    for(i = 0; i < NOTA; i++){
        if(notas[i] < 10){
            printf("\nO %i aluno está REPROVADO! Com a nota %.2f.\n", i+1, notas[i]);
            reprovado++;
        }
    }
    if(reprovado == 0){
            puts("Nenhum aluno foi REPROVADO!");
    }

    putchar('\n');
    system("pause");
    system("cls");
    Painel();
}

//8
void Crescente(float notas[]){
    int i = 0, j = 0, aux = 0;

    system("cls");
    putchar('\n');

    for(i = 0; i < NOTA - 1; i++){
        for(j = i + 1; j < NOTA; j++){

            if(notas[j] > notas[j + 1]) {
                aux = notas[j];
                notas[j] = notas[j + 1];
                notas[j + 1] = aux;
            }
        }
    }
    for(i = 0; i < NOTA; i++){
    printf("%.2f - ", notas[i]);
    }

    puts("FIM!");
    putchar('\n');
    system("pause");
    system("cls");
    Painel();
}

//9
void Decrescente(float notas[]){
       int i = 0, j = 0, aux = 0;

    system("cls");
    putchar('\n');

    for(i = 0; i < NOTA - 1; i++){
        for(j = i + 1; j < NOTA; j++){

            if(notas[j] < notas[j + 1]) {
                aux = notas[j];
                notas[j] = notas[j + 1];
                notas[j + 1] = aux;
            }
        }
    }
    for(i = 0; i < NOTA; i++){
    printf("%.2f - ", notas[i]);
    }

    puts("FIM!");
    putchar('\n');
    system("pause");
    system("cls");
    Painel();
}



void main(){
    setlocale(LC_ALL, "Portuguese");
    float vetor[NOTA] = {0};
    int i = 0, opcao = 0;

    Painel();

    do{
        printf("\nDigite a opção desejada: ");
        scanf("%i", &opcao);

        switch(opcao){
        case 0:
            puts("\nPrograma finalizado... \n\n");
            break;
        case 1:
            Ler_Notas(vetor);
            break;
        case 2:
            Mostrar_Notas(vetor);
            break;
        case 3:
            Media_Notas(vetor);
            break;
        case 4:
            Alterar_Notas(vetor);
            break;
        case 5:
            Maior_Notas(vetor);
            break;
        case 6:
            Aprovado(vetor);
            break;
        case 7:
            Reprovado(vetor);
            break;
        case 8:
            Crescente(vetor);
            break;
        case 9:
            Decrescente(vetor);
            break;
        default:
            puts("\nOpção inválida... Tente novamente!!!\n");
            system("pause");
            system("cls");
            Painel();
        }
    }while(opcao !=0);


}
