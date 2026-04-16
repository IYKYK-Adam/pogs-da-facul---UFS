#include <stdio.h>

/*1. Implemente um algoritmo em C que recebe dois números inteiros
informados pelo usuário e imprime a média desses números.

int main() {
    int n1, n2;
    float media;

    printf("digite o primeiro numero inteiro: ");
    scanf("%d", &n1);

    printf("digite o segundo numero inteiro: ");
    scanf("%d", &n2);

    media = (n1 + n2) / 2.0;

    printf("a media dos numeros eh: %.2f\n", media);

    return 0;
}*/

/*2. Implemente um algoritmo em C que recebe um número inteiro
informado pelo usuário e imprime seu quadrado.

int main() {
    int n, quadrado;

    printf("digite um numero inteiro: ");
    scanf("%d", &n);

    quadrado = n * n;

    printf("o quadrado do numero eh: %d\n", quadrado);

    return 0;
}*/

/*3. Implemente um algoritmo em C que recebe um valor informado
pelo usuário, que representa o saldo de conta, e imprimir esse valor
reajustado em 1%.

int main()
{
    double saldo, reajuste;
    
    printf("digite o saldo da conta: ");
    scanf("%lf", &saldo);  

    reajuste = saldo*1.01;

    printf("o saldo com reajuste é: %.2lf \n", reajuste);
    
    return 0;
}*/


/*4. Implemente um algoritmo em C que recebe como entrada o preço
de um produto informado pelo usuário, calcular novo preço desse
produto com desconto de 9% e imprime o resultado.

int main()
{
    double preco;

    printf("insira o valor do protudo: ");
    scanf("%lf", &preco);

    printf("o novo valor desse produto eh: %.2lf \n", preco - preco*0.09);

    return 0;
}*/

/*5. Implemente um algoritmo em C que recebe três caracteres do
usuário e imprime esses três caracteres.

int main()
{
    char a, b, c;
    
    printf("digite uma letra: ");
    scanf("%c", &a);

    fflush(stdin);

    printf("digite a segunda letra: ");
    scanf("%c", &b);

    fflush(stdin);
    
    printf("digite a terceira letra: ");
    scanf("%c", &c);

    printf("a primeira letra eh: %c \na segunda letra eh: %c \na terceira letra eh: %c \n", a, b, c);

    return 0;
}*/

/*6. Implemente um algoritmo em C que recebe como entrada três
números reais informados pelo usuário (a, b e c), calcula e escreve o
resultado da expressão x = 2 * ( ( a – c ) / 8 ) – b * 5
int main()
{
    double a, b , c, fx;

    printf("insira um numero real: ");
    scanf("%lf", &a);

    printf("insira um segundo numero real: ");
    scanf("%lf", &b);

    printf("insira um terceiro numero real: ");
    scanf("%lf", &c);

    fx = 2 * ( ( a - c ) / 8 ) - b * 5;

    printf("o resultado da equacao eh: %.2lf \n", fx);

    return 0;
}*/


/*7. Implemente um algoritmo em C que lê 2 números inteiros não
nulos, calcula e escreve o resultado da soma, da multiplicação, da
subtração, da divisão e do resto da divisão do primeiro pelo
segundo número.

int main()
{
   int n1, n2; 

   printf("digite o primeiro numero (inteiro): ");
   scanf("%d", &n1);

   printf("digite o segundo numero (inteiro): ");
   scanf("%d", &n2);

   printf("RESULTADOS: ");
   printf("soma: %d \nmultiplicacao: %d \nsubtracao: %d \ndivisao: %d \nresto da divisao: %d \n", n1 + n2, n1 * n2, n1 - n2, n1 / n2, n1 % n2);

   return 0;
}*/

