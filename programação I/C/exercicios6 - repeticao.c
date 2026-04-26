#include <stdio.h>
#include <math.h>

//EXEMPLO//

//1.    
/*
int main()
{
    int cont = 1;
    while(cont <=10){
        printf("%d\n", cont);
        cont++; //cont += 1;
    }
    
    return 0;
}
*/

//EXERCICIOS//

//1.Escrever um algoritmo que recebe 5 números do usuário, calcula e imprime a soma desses números
/*
int main()
{
    int cont = 1, n, soma = 0;
    
    while(cont <= 5){
        printf("Digite o %d numero: ", cont);
        scanf("%d", &n);
        
        soma += n;
        
        cont++;
    }
    
    printf("a soma dos numeros eh: %d \n", soma);
    
    return 0;
}
*/

//2.  Escrever um programa que recebe 10 números do usuário, calcula e retorna a média desses números
/*
int main()
{
    int n, cont=1, soma=0, media;
    
    while(cont <= 10){
        printf("insira o %d numero: ", cont);
        scanf("%d", &n);
        
        soma = soma + n; //soma += n;
        cont++;
    }
    
    media = soma/10;
    
    printf("a media dos numeros apresentados eh: %d \n", media);
    
    return 0;
}
*/

//3.Escrever um algoritmo que recebe um número inteiro positivo informado pelo usuário e que escreve a soma de todos os números inteiros, desde 0 até o valor lido
/*
int main()
{
    int n, cont=0, final=0;
    
    printf("Digite um numero: ");
    scanf(" %d", &n);
    
    while(cont <= n){
        final += cont;
        cont +=1;
    }
    
    printf("Resultado: %d \n", final);
    
    return 0;
}
*/


//4. Escreva um algoritmo que recebe um número inteiro não-negativo do usuário, calcula e escreve o valor do fatorial desse número. Caso o usuário informe um número negativo imprimir a mensagem “Número inválido!”

/*
int main()
{
    int n, cont=1, fat=1;
    
    printf("Digite um numero: ");
    scanf(" %d", &n);
    
    if(n > 0){
    
        while(cont <= n){
        fat *= cont;
        cont +=1;
        }
    
        printf("Resultado: %d \n", fat);
    }
    
    else{
        printf("Numero invalido! \n");
    }
    
    return 0;
}    
*/

//5.Escreva um algoritmo que recebe n números informados pelo usuário (o n é definido pelo usuário), calcula e imprime a soma dos números pares e a média dos números ímpares.
/*
int main()
{
    int n, qtd, cont=1, contm=0, soma=0, soma2=0;
    double media=0;
    
    printf("Digite a qauntidade de numeros: ");
    scanf(" %d", &qtd);
    
    while(cont <= qtd){
        
        printf("Digite um numero: ");
        scanf(" %d", &n);
        
        if (n%2==0){
            soma += n;
        }
        
        else{
            soma2 += n;
            contm++;
        }
        
        cont++;
    }
    
    media = soma2 / contm;
    
    printf(" \n");
    printf("| RESULTADOS | \n");
    printf(" \n");
    
    printf("|A SOMA DOS NUMEROS PAR EH: %d| \n|A MEDIA DOS NUMEROS IMPAR EH: %.2lf| \n", soma, media);
    
    return 0;
}
*/

//6. Escreva um algoritmo que recebe vários números inteiros do usuário e calcula a média desses números. Nesse caso, a quantidade de números a serem informados é desconhecida. O seu algoritmo deve finalizar quando o usuário digitar o número zero, que não deve entrar no conjunto dos números a serem analisados. Ou seja, quando o usuário informar o número zero, o seu algoritmo deve para de solicitar números ao usuário, calcular a soma dos números e imprimir os resultados.
/*
int main()
{
    int n, cont=0, soma=0;
    double media;
    
    printf("Informe um numero: ");
    scanf(" %d", &n);
    
    while (n != 0){
        
        soma +=n;
        
        printf("Informe um numero: ");
        scanf(" %d", &n);
        
        cont++;
    }
    
    media = soma / cont;
    
    printf(" \n");
    printf("|RESULTADO : %.2lf| \n", media);
    
    return 0;
}
*/

//7. Escreva um algoritmo que recebe vários números inteiros do usuário e verifica quem é o maior número e quem é o menor. Nesse caso, a quantidade de números a serem informados é desconhecida. O seu algoritmo deve finalizar quando o usuário digitar o número zero, que não deve entrar no conjunto dos números a serem analisados.

///*

//*/