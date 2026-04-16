#include <stdio.h>
#include <math.h>

/*
int main()
{
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);
    if(num > 0){
        printf("Esse numero eh positivo.");
    }
    if(num <= 0){
        printf("O numero eh nao-positivo.");
    }
    return 0;
}

int main()
{
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);
    if(num > 0){
        printf("Esse numero eh positivo.");
    }
    else{
        printf("O numero eh nao-positivo.");
    }
    return 0;
 
}
*/

// EXERCICIOS //

//1. PAR OU IMPAR

/*
int main()
{
    int num, div;
    printf("Informe um numero: ");
    scanf("%d", &num);
    div = num % 2;
    if(div == 0){
        printf("Esse numero eh par.");
    }
    else{
        printf("O numero eh impar.");
    }
    return 0;
} 
*/

//2.se numeros iguais

/*
int main()
{
    double n1, n2;
    printf("Digite um numero: ");
    scanf("%lf", &n1);
    
    printf("digite o segundo numero: ");
    scanf("%lf", &n2);
    
    if(n1 == n2){
        printf("esses numeros são iguais!");
    }
    
    else{
        printf("esses numeros são diferentes!");
    }
    
    return 0;
}
*/

//3

/*
int main()
{
    int idade;
    
    printf("Qual sua idade? ");
    scanf("%d", &idade);
    
    if(idade >= 18){
        printf("vc eh maior de idade");
    }
    
    else{
        printf("vc eh de menor");
    }
    
    return 0;
}
*/

//4

/*
int main()
{
    double n1, n2;
    
    printf("digite a primeira nota: ");
    scanf("%lf", &n1);
    
    printf("digite a segunda nota: ");
    scanf("%lf", &n2);
    
    if((n1 + n2) / 2 >= 5){
        printf("PARABENS! vc passou!");
    }
    
    else{
        printf("hahaha perdeu");
    }
    
    return 0;
}
*/

//5

/*
int main()
{
    int idade;
    
    printf ("Qual sua idade? ");
    scanf("%d", &idade);
    
    if(idade >= 65){
        printf("vc eh idoso");
    }
    
    else if(idade < 18){
        printf("vc eh menor");
    }
    
    else{
        printf("vc eh normal (de maior)");
    }

    return 0;
}
*/

/*6. Desenvolva um algoritmo que calcule o valor a ser pago por um produto, considerando o preço normal do mesmo e a escolha da condição de pagamento (esses dados devem ser informados pelo usuário). UClize os códigos da tabela abaixo para definir a condição de pagamento escolhida e efetuar o cálculo do valor a ser pago.

int main()
{
    double preco;
    int cod;

    printf("Insira o preco do products: ");
    scanf(" %lf", &preco);

    printf(" \n");
    printf("|CONDICOES DE PAGAMENTO| \n");

    printf("1.Pagamento a vista em dinheiro ou cheque. \n2.Pagamento a vista no cartao de credito. \n3.Pagamento parcelado em duas vezes sem juros. \n4.Pagamento parcelado em duas vezes com acrescimo de 10%% de juros. \nEscolha uma opcao: ");
    scanf("%d", &cod);

    if(cod == 1){
        printf("O produto de RS%.2lf com 10%% de desconto eh: %.2lf \n", preco, preco-(preco*0.1));
    }

    else if(cod == 2){
        printf("O produto de RS%.2lf com 15%% de desconto eh: %.2lf \n", preco, preco-(preco*0.15));
    }

    else if(cod == 3){
        printf("O produto de RS%.2lf em 2x sem juros eh: %.2lf \n", preco, preco/2);
    }

    else if(cod == 4){
        printf("O produto de RS%.2lf em 2x com juros eh: %.2lf \n", preco, preco+(preco*0.1));
    }

    else{
        printf("Codigo nao encontrado. Tente novamente mais tarde! \n");
    }

    return 0;
}
*/

/*7. Escreva um algoritmo que recebe a idade de uma pessoa como entrada e informe se é menor de idade, maior de idade ou maior de 65 anos.

int main()
{
    int idade;
    
    printf("Qual sua idade? ");
    scanf("%d", &idade);
    
    if(idade <= 18){
        printf("vc eh um lil bro");
    }
    
    else if(idade >= 65){
        printf("chegou a terceira idade");
    }

    else{
        printf("vc eh adulto parabens");
    }
    
    return 0;
}
*/


/*8. Escreva um algoritmo que recebe 3 valores como entrada (a, b, c) e ache a(s) solução(ões) da equação de 2º grau pelo método de Báskara: y =a*x2 + b*x + c = 0.

int main(){

    double a, b, c, x1, x2;

    printf("|CALCULADORA DE FUNCOES DO 2 GRAU|");
    printf(" \n");

    printf("Digite o valor de a: ");
    scanf("%lf", &a);

    printf("Digite o valor de b: ");
    scanf("%lf", &b);

    printf("Digite o valor de c: ");
    scanf("%lf", &c);

    x1 = (-b + sqrt(pow(b ,2)-4*a*c)) / 2*a;
    x2 = (-b - sqrt(pow(b ,2)-4*a*c)) / 2*a;

    printf("|AS RAIZES DE f(x) =%.2lf*x2 + %.2lf*x + %.2lf| sao: \n", a, b, c);


    printf("X1 = %.2lf \n", x1);
    printf("X2 = %.2lf \n", x2);


    return 0;
}
*/