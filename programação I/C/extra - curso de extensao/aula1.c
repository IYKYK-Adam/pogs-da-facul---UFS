#include <stdio.h>
#include <math.h>

/* |EXERCÍCIOS EXTRA| */

//1.
/*
int main()
{
	double valor, taxa, total;

	printf("Digite o valor total gasto no restaurante: ");
	scanf("%lf", &valor);

	taxa = valor * 0.1;
	total = valor + taxa;
	    
    printf("O valor que cada um vai pagar eh: %.2lf \n", total / 3);

	return 0;
}
*/

//2
/*
int main()
{
    int seg;
    
    printf("Quantos segundos o corredor fez? ");
    scanf("%d", &seg);
    
    printf("O tempo foi de %d minutos e %d segundos. \n", seg/60, seg%60);
    
    return 0;
}
*/

//3
/*
int main()
{
    int inicial, lote, vendidas, devol;
    
    printf("Digite a quantidade em estoque: ");
    scanf("%d", &inicial);
    
    printf("Digite a quantidade recebida do novo lote: ");
    scanf("%d", &lote);
    
    printf("Digite a quantidade vendida: ");
    scanf("%d", &vendidas);
    
    printf("Digite a quantidade devolvida: ");
    scanf("%d", &devol);
    
    printf("o saldo de peças restantes no estoque eh: %d", inicial+lote-vendidas+devol);
    
    return 0;
}
*/

//4.
/*
int main()
{
    int cx_refri, nlata, conv, total, divisao, sobra;
    
    printf("Quantidade de caixas de refris: ");
    scanf("%d", &cx_refri);
    
    printf("Quantidade de latas de refris em cada caixa: ");
    scanf("%d", &nlata);
    
    printf("Quantidade de convidados: ");
    scanf("%d", &conv);
    
    total = cx_refri*nlata;
    divisao = total/conv;
    sobra = total%conv;
    
    printf("|RESULTADOS| \n");
    printf("Quantidade de latas no toal: %d \n", total);
    printf("Quantidade de latas por convidado: %d \n", divisao);
    printf("Quantidade de latas que vai sobrar: %d \n", sobra);
    
    return 0;
}
*/

//5
/*
int main()
{
    double dist, preco, auton, litros, total;
    
    printf("Qual distancia sera percorrida?(km) ");
    scanf(" %lf", &dist);
    
    printf("Qual preço do combustivel? ");
    scanf(" %lf", &preco);
    
    printf("Qual autonomia do veiculo?(km/l) ");
    scanf(" %lf", &auton);
    
    litros = dist / auton;
    total = litros * preco;
    
    printf(" \n");
    printf("|RESULTADOS| \n");
    printf("Quantidade de litros necessaria p/ viagem: %.2lf \n", litros);
    printf("Valor total a ser investido em abastecimento: %.2lf \n", total);
    
    return 0;
}
*/

//6
/*
int main()
{
    double vdiaria, km, orc, total, custo, dias;
    
    printf("Insira o valor da diaria: ");
    scanf("%lf", &vdiaria);
    
    printf("Qual a quantidade de dias? ");
    scanf("%lf", &dias);
    
    printf("Insira os km percorridos: ");
    scanf("%lf", &km);
    
    printf("Qual orçamento do cliente: ");
    scanf("%lf", &orc);
    
    total = vdiaria + (km * 0.15);
    custo = total * dias;
    
    printf("O custo total ficou: %.2lf \n", custo);
    
    printf(" \n");
    printf("| SITUACAO DO CLIENTE | \n");
    
    if(custo <= orc){
        printf("Orcamento aprovado!");
    }
    
    else{
        printf("Orcamento nao aprovado!");
    }
    
    return 0;
}
*/
