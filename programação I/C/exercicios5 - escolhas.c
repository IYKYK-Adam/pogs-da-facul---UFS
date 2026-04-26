#include <stdio.h>
#include <math.h>

//EXEMPLO
/*
int main()
{
    int dia;
    printf("informe um numero de 1 ate 7: ");
    scanf("%d", &dia);
    
    switch(dia){
        case 1: {
            printf("domingo");
            break;
        }
        
        case 2: {
            printf("segunda");
            break;
        }
        
        case 3: {
            printf("terca");
            break;
        }
        
        case 4: {
            printf("quarta");
            break;
        }
        
        case 5: {
            printf("quinta");
            break;
        }
        
        case 6: {
            printf("sexta");
            break;
        }
        
        case 7: {
            printf("sabado");
            break;
        }
        
        default: {
            printf("opcao invalida!");
            break;
        }
    }
    
    return 0;
}
*/

//EXERCICIOS//

//1. conceito de aluno
/*
int main()
{
    char con;
    
    printf("informe o conceito do aluno (A ate D): ");
    scanf("%c", &con);
    
    switch(con){
        
        case 'A': {
            printf("Exelente");
            break;
        }
        
        case 'B': {
            printf("Bom");
            break;
        }
        
        case 'C': {
            printf("Regular");
            break;
        }
        
        case 'D': {
            printf("Reprovado");
            break;
        }
        
        default:{
            printf("insira um conceito valido (maiusculo)");
            break;
        }
    }
    
    return 0;
}
*/

//2.
/*
int main()
{
    double n1, n2;
    char op;
    
    printf("CALCULADORA \n");
    
    printf("Digite o primeiro numero da operacao: ");
    scanf(" %lf", &n1);
    
    printf("Digite o segundo numero da operacao: ");
    scanf(" %lf", &n2);
    
    printf("Escolha a operacao (+, -, *, /): ");
    scanf(" %c", &op);
    
    switch(op){
        case '+':{
            printf("Resultado: %.2lf %c %.2lf = %.2lf \n", n1, op, n2, n1+n2);
            break;
        }
        
        case '-':{
            printf("Resultado: %.2lf %c %.2lf = %.2lf \n", n1, op, n2, n1-n2);
            break;
        }
        
        case '*':{
            printf("Resultado: %.2lf %c %.2lf = %.2lf \n", n1, op, n2, n1*n2);
            break;
        }
        
        case '/':{
            printf("Resultado: %.2lf %c %.2lf = %.2lf \n", n1, op, n2, n1/n2);
            break;
        }
        
        default:{
            printf("Opcao Invalida \n");
            break;
        }
    }
    
    return 0;
}
*/