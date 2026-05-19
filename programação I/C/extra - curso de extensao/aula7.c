#include <stdio.h>
#include <math.h>

//1. Para ajudar na organização das notas de uma disciplina de SI, crie uma função chamada analisarTurma que receba como parâmetro a quantidade de alunos de uma turma. Dentro dessa função, o programa deve ler a nota de cada aluno (0 a 10). Se a nota for maior ou igual a 7.0, conte como "Aprovado", caso contrário, como "Reprovado". A função deve retornar a quantidade total de alunos aprovados. No programa principal, utilize o retorno dessa função para exibir a taxa de sucesso da turma em porcentagem.
/*
double analisarTurma(double qtdAluno)
{
    double nota, aprov=0;

    for (int i=1; i<=qtdAluno; i++){
        printf("Digite a nota do %d° aluno: ", i);
        scanf("%lf", &nota);

        if(nota<=10 && nota>=0){
            if(nota>=7){
                aprov++;
            }
        }

        else{
            printf("Error: Nota invalida! \n");
            i--;
        }

    }

    return aprov;

}

int main()
{
    double qtdAluno;

    do{
        printf("|DADOS DOS ALUNOS| \n");
        printf("Digite a quantidade de alunos: ");
        scanf("%lf", &qtdAluno);
    
        printf("\n");

        if(qtdAluno <=0){
            printf("Error: Quantidade invalida! \n");
            printf("\n");
        }

    }while(qtdAluno <= 0);
    
    
    double aprovs = analisarTurma(qtdAluno);
    double percentual = (aprovs/qtdAluno)*100;

    printf("\n");
    printf("|RESULTADOS DA ANALISE| \n");
    printf("APROVADOS: %.0lf \n", aprovs);
    printf("REPROVADOS: %.0lf \n", qtdAluno-aprovs);
    printf("\n");
    printf("PERCENTUAL: %.1lf%% \n", percentual);
    printf("\n");
    return 0;
}
*/

//2.Você deve desenvolver um programa em linguagem C que funcione como uma calculadora interativa. O sistema deve permitir que o usuário realize múltiplas operações sem precisar reiniciar o programa a cada cálculo. Para manter o código organizado (modularizado), você deve criar uma função específica para cada operação abaixo. Cada função deve receber dois números como parâmetros e retornar o resultado:
    //a. soma
    //b. subtracao
    //c. multiplicacao
    //d. divisao (Atenção: verifique se o divisor é diferente de zero!)
    //e. media
//O programa deve exibir um menu no console com as opções de 1 a 6, onde as opções de 1 a 5 se relacionam com as operações, e a opção 6 é a condição de parada. O seu programa deve ter o seguinte fluxo:
    //Solicita a opção do usuário;
    //Caso a opção seja uma operação (opções de 1 a 5), solicita ao usuário que informe dois números.
    //Chama a função correspondente
    //Exibe o resultado.
/*
void pedirNumeros(double *n1, double *n2){ //Isso permite que a função altere as variáveis que estão no main

    printf("Digite dois numeros: \n");
    printf(">> ");
    scanf("%lf", n1); //não usa &, porque n1 e n2 já são endereços. (no main)
    printf(">> ");
    scanf("%lf", n2);

    printf("\n");
}

void soma(double n1, double n2){
    printf(">> %.2lf + %.2lf = %.2lf\n", n1, n2, n1 + n2);
}

void sub(double n1, double n2){
    printf(">> %.2lf - %.2lf = %.2lf\n", n1, n2, n1 - n2);
}

void mult(double n1, double n2){
    printf(">> %.2lf x %.2lf = %.2lf\n", n1, n2, n1 * n2);
}

void media(double n1, double n2){
    printf(">> MEDIA DE: %.2lf e %.2lf => %.2lf\n", n1, n2, (n1 + n2)/2);
}


int main()
{
    int menu;
    double n1, n2;

    do{

        printf("|MENU - CALCULADORA| \n");
        printf("1.soma \n2.Subtracao \n3.Multiplicacao \n4.Divisao \n5.Media \n6.Sair \n");
        printf("Escolha uma opcao: ");
        scanf("%d", &menu);

        printf("\n");

        switch (menu)
        {
        case 1:
            pedirNumeros(&n1, &n2);
            soma(n1, n2);
            printf("\n");
            break;
        
        case 2:
            pedirNumeros(&n1, &n2);
            sub(n1, n2);
            printf("\n");
            break;

        case 3:
            pedirNumeros(&n1, &n2);
            mult(n1, n2);
            printf("\n");
            break;

        case 4:
            pedirNumeros(&n1, &n2);

            while (n2 == 0) {
                printf("Error: nao existe divisao por zero!\n");
                printf("\n");
                printf("Digite o segundo numero novamente: ");
                scanf("%lf", &n2);
                printf("\n");
            }

            printf("\n");
            printf(">> %.2lf / %.2lf = %.2lf\n", n1, n2, n1 / n2);
            printf("\n");

            break;

        case 5:
            pedirNumeros(&n1, &n2);
            media(n1, n2);
            printf("\n");
            break;

        case 6:
            break;
        
        default:
            printf("Error: opcao invalida! \n");
            printf("\n");
            break;
        }

    }while (menu != 6);
    
    printf("Finalizando... \n");
    printf("\n");
}
*/