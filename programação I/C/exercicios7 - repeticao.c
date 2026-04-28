#include <stdio.h>
#include <math.h>


// DO WHILE //

//EXEMPLO//
// Escrever um algoritmo para imprimir os números de 1 até 10, um a um
/*
int main()
{
    int cont =1;
    do{
        printf("%d\t", cont); //\t tabulação (espaçamento pro lado)
        cont++;
    }while(cont <=10);
    
    return 0;
}
*/

//EXERCICIOS//
//1.Escrever um programa que recebe 10 números como entrada e retorna a soma desses números.
/*
int main()
{
    int n, cont=0, soma=0;
    
    do{
        printf("Digite um numero: ");
        scanf(" %d", &n);
        
        soma += n;
        
        cont++;
    }while(cont < 10);
    
    printf(" \n");
    printf("|RESULTADO: %d| \n", soma);
    
    return 0;
}
*/

//2.  Escrever um algoritmo que recebe 15 números reais do usuário, determina e escreve a soma dos valores posiHvos e a quanHdade de valores negaHvos lidos.
/*
int main()
{
    double n, cont=0, soma=0, cont_neg=0;
    
    do{
        printf("Digite um numero: ");
        scanf(" %lf", &n);
        
        if (n<0){
            cont_neg++;
        }
        
        else{
            soma += n;
        }
        
        cont++;
    }while(cont < 15);
    
    printf(" \n");
    printf("|RESULTADOS| \n");
    printf(" \n");
    
    printf("SOMA DOS POSITIVOS: %.2lf \nQUANTIDADE DOS NEGATIVOS: %.0lf \n", soma, cont_neg);
    
    return 0;
}
*/

/*3. Escreva um programa que receba um número inteiro do usuário, calcule e escreva a tabuada deste número u<lizando uma estrutura de repe<ção.
Ex.: Digite um número: 2
2x1=2
2x2=4
2x3=6.. até 10. 
*/

//FOR//
//exemplos//

//1. Escrever um algoritmo para imprimir os números de 1 até 10, um a um.
/*
int main()
{
   for(int cont = 1; cont <= 10; cont++){
	printf("%d\t", cont);
   }
   
   return 0;
}
*/

//2.Escrever um algoritmo que escreve o quadrado de todos os inteiros, desde 1 até 20
/*
int main()
{
    
    for(int cont = 1; cont <= 20; cont++){
        printf("%d\n", cont*cont);
    }
    
    return 0;
}
*/

//3.Escrever um algoritmo que recebe do usuário um número inteiro posi<vo e que escreve todos os números múl<plos de 3, desde 0 até o valor lido. 
/*
int main()
{
    int n, cont;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for (cont=0; cont < n; cont+=1){
        if (cont%3 == 0 && cont != 0){
            printf(" %d \n", cont);
        } 
    }

    return 0;
}
*/

//4.Escrever um algoritmo que lê um número inteiro posi<vo e que escreve todos os números a par<r do número lido até o zero (ou seja, escreva os números de trás para a frente, um a um).
/*
int main()
{
    int n, cont;

    printf("Digite um numero poitivo: ");
    scanf("%d", &n);

    for (cont=n; cont > 0; cont=cont-1){
        if (cont%2 == 0){
            printf("%d\n", cont);
        }
    }
}
*/

//5. Escreva um programa em C que escreve os números múltiplos de 7 que existem entre os valores 100 e 200. Ao final do algoritmo, imprima a soma destes números.
/*
int main()
{
    int n, soma=0;

    for(n=100; n <= 200; n+=1)
    {
        if(n%7 == 0){
            soma +=n;
            printf("%d\n", n);
        }
    }

    printf("%d\n", soma);

    return 0;
}
*/

//6. Escreva um algoritmo que recebe a senha (número inteiro) do usuário. Se a senha for igual a 1786, o algoritmo deve escrever “Bom dia! Seja bem-vindo!”. Caso contrário, o algoritmo deve imprimir a mensagem “Acesso negado! Senha inválida”. Além disso, o algoritmo deve ser desenvolvido de modo a permitir ao usuário apenas 3 tentativas.
/*
int main()
{
    int senha, tent;

    for(tent=0; tent < 3; tent+=1){
        printf("Digite a senha: ");
        scanf("%d", &senha);
        
        if(senha == 1786){
            printf("Bom dia! Seja bem-vindo!\n");
            return 0;
        }

        else{
            printf("Acesso negado! Senha invalida\n");
        }
    }

    return 0;
}
*/

//7. Escrever um algoritmo que recebe um número inteiro positivo do usuário e escreve todos os valores da série de Fibonacci, desde 1 até o valor lido. Exemplo da série: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89.
/*
int main()
{
    int n, a=1, b=1, cont;

    printf("Escreva um numero: ");
    scanf("%d", &n);

    for(cont=1; cont <=n;){
        printf("%d\t", cont);

        a = b;
        b = cont;
        cont=a+b;
    }

    return 0;
}
*/
