#include <stdio.h>

/*Escreva um algoritmo em C que recebe do usuário o valor do raio de um círculo,
calcula e imprime o valor da área e do perímetro desse círculo.
Dados: área = pi * raio * raio; perímetro = 2 * pi * raio; pi = 3.14159

int main()
{
    double raio, pi;
    printf("digite o raio da circunferencia: ");
    scanf("%lf", &raio);

    pi = 3.14159;

    printf("a area eh: %.2lf \nja o perimetro eh: %.2lf \n", pi * raio * raio, 2 * pi * raio);

    return 0;
}*/


/* Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste
aluno. Considerar que a média é ponderada e que o peso das notas é: 2,3 e 5,
respectivamente

int main()
{
    double n1, n2, n3, media;

    printf("digite a primeira nota: ");
    scanf("%lf", &n1);

    printf("digite a segunda nota: ");
    scanf("%lf", &n2);

    printf("digite a terceira nota: ");
    scanf("%lf", &n3);

    media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;

    printf("a media ponderada desse aluno eh: %.1lf \n", media);

    return 0;
}*/

/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a
percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica).
Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%,
escrever um algoritmo que leia o custo de fábrica de um carro e escreva o custo
ao consumidor.

int main()
{
    double fabrica;

    printf("digite o custo de fabrica do carro: ");
    scanf("%lf", &fabrica);

    fabrica += fabrica * 0.45 + fabrica *0.28; //custo = fabrica + (fabrica * 0.45 + fabrica *0.28);

    printf("o custo do consumidor eh: %.2lf \n", fabrica);

    return 0;
}*/

/* Escreva um algoritmo em C que recebe como entrada um número inteiro de 3
casas decimais e mostra como resultado o algarismo da casa das dezenas.

|**NAO SABIA COMO SELECIONA O ALGARISMO**|

int main()
{
    int n;
    printf("escreva um numero intero de 3 casa decimais: ");
    scanf("%d", &n);

    n /= 10;
    n %= 10;

    printf("a casa das dezenas desse algarismo eh: %d \n", n);

    return 0;
}*/


/*Escrever um algoritmo em C que recebe como entrada um inteiro que representa
uma data no formato ddmmaa e imprima na tela a seguinte saída:
Dia: dd Mês: dd Ano: dd

|**NAO SABIA COMO SELECIONAR OS ALGARISMOS**|

int main()
{
    int data, dia, mes, ano;

    printf("digite uma data (ddmmaa): ");
    scanf("%d", &data);

    dia = data / 10000;
    mes = (data / 100) % 100;
    ano = data % 100;

    printf("| Dia: %02d | Mes: %02d | Ano: %02d | \n", dia, mes, ano);

    return 0;
}*/


