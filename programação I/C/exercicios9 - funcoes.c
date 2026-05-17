#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793

///FUNÇÕES//

//EXEMPLOS//

//1.asteristicos
/*
int main()
{
    printf("Hello World");

    return 0;
}
*/

//2.soma
/*
void soma(int n1, int n2){
    int resultado = n1 + n2;
    printf("A Soma eh: %d.\n", resultado);
}

int main(){
    
    int num1, num2;
    
    printf("Informe dois numeros: ");
    scanf("%d %d", &num1, &num2);
    soma(num1, num2);
    
    return 0;
}
*/


//EXERCICIOS//

//1.par impar
/*
void paridade(int n){
    if(n%2==0){
        printf("%d eh par. \n", n);
    }
    
    else{
        printf("%d eh impar. \n", n);
    }
}

int main(){
    
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    paridade(num);
    
    return 0;
}
*/


//2. primo
/*
void primo(int n){
    
    int cont = 0;
    
    if (n == 1){
        printf("%d nao eh primo. \n", n);
    }
    
    else{
        for (int i=1; i<=n ; i++){
            if(n%i==0){
                cont++;
            }
        }
        
        if (cont==2){
        printf("%d eh primo. \n", n);
        }
        
        else{
            printf("%d nao eh primo. \n", n);
        }
    }
    
}

int main(){
    
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    primo(num);
    
    return 0;
}
*/


//3. Escreva um procedimento que receba como parâmetro o peso e a altura de uma pessoa, calcule o seu IMC e imprima a sua classificação.
/*
void imc(double peso, double altura)
{
    double imc = peso / (altura*altura);

    printf("IMC = %.1lf \n", imc);

    if (imc<18.5){
        printf("Abaixo do peso. \n");
    }

    else if (imc>=18.5 && imc<=25){
        printf("Peso normal. \n");
    }

    else if (imc>25 && imc<=30){
        printf("Acima do peso. \n");
    }

    else{
        printf("Obeso. \n");
    }
}

int main()
{
    double peso, altura;

    printf("Insira seu peso: ");
    scanf("%lf", &peso);

    printf("Insira sua altura: ");
    scanf("%lf", &altura);

    imc(peso, altura);
}
*/


//4.Escreva uma função que recebe um número inteiro como parâmetro e retorna a soma de 0 até o número informado.
/*
int somas(int n){

    int i=0, soma=0;

    while (i<=n){
        soma+=i;
        i++;
    }

    printf("A soma do intervalo 0 ate %d eh: %d \n", n, soma);

}

int main(){
    
    int n;
    
    printf("Informe um numero: \n");
    printf("> ");
    scanf("%d", &n);
    
    somas(n);
}
*/


//5. Escreva uma função em C que recebe um número inteiro como parâmetro e que retorne o fatorial desse número.
/*
int fatorial(int n){

    int i=2, fat=1;

    while (i<=n){
        fat*=i;
        i++;
    }

    printf(" %d! = %d \n", n, fat);
    printf("\n");
}

int main(){
    
    int n;
    
    printf("Informe um numero: \n");
    printf("> ");
    scanf("%d", &n);

    printf("\n");

    fatorial(n);
}
*/


//6. Escreva uma função em C recebe dois números inteiro como parâmetro e retorne o maior valor.
/*
void maior(int n1, int n2)
{
    if(n1>n2){
        printf("%d eh meior que %d \n", n1, n2);
    }

    else{
        printf("%d eh meior que %d \n", n2, n1);
    }
}

int main()
{
    int n1, n2;
    
    printf("Digite dois numeros inteiros: \n");
    printf("> ");
    scanf("%d", &n1);
    printf("> ");
    scanf("%d", &n2);

    maior(n1, n2);
}
*/


//7. Construir uma função em C que determine o maior de três números inteiros, usando a função anterior.
/*
int maior(int n1, int n2)
{
    int maior;

    if(n1>n2){
        maior = n1;
    }

    else{
        maior = n2;
    }

    return maior;
}

void maior2(int maior, int n3)
{
    if(maior>n3){
        printf("O maior numero eh: %d \n", maior);
    }

    else{
        printf("O maior numero eh: %d \n", n3);
    }
}

int main()
{
    int n1, n2, n3;
    
    printf("Digite tres numeros inteiros: \n");
    printf("> ");
    scanf("%d", &n1);
    printf("> ");
    scanf("%d", &n2);
    printf("> ");
    scanf("%d", &n3);

    maior2(maior(n1, n2), n3);
}
*/


//8. Faça uma função que recebe por parâmetro a altura e o sexo de uma pessoa e retorna o seu peso ideal.
    //- Homens = 72.7 x altura – 58 
    //- Mulheres = 62.1 x altura - 44.7
/*
double pesoIdeal (double altura, char sexo)
{
    double peso;

    if(sexo=='F' || sexo=='f'){
        peso = 62.1 * altura - 44.7;
    }

    if(sexo=='M' || sexo=='m'){
        peso=72.7 * altura - 58;
    }

    return peso;
}

int main()
{
    double altura, resul;
    char sexo;

    printf("Digite sua altura: ");
    scanf(" %lf", &altura);

    printf("Digite seu genero (F ou M): ");
    scanf(" %c", &sexo);

    printf("\n");

    while (((sexo != 'f' && sexo != 'F' && sexo != 'm' && sexo != 'M') || altura <= 0)){
        
        printf("Erro: algum valor nao identificado! \n");

        printf("\n");

        printf("Digite sua altura: ");
        scanf(" %lf", &altura);

        printf("Digite seu genero (F ou M): ");
        scanf(" %c", &sexo);

        printf("\n");

    }
        
    resul = pesoIdeal(altura, sexo);

    printf("Sua peso ideal eh: %.1lfkg \n", resul);
    
    
    return 0;
}
*/


//9. Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume (v = 4/3 ∗ π ∗ R3).
/*
double volumeEsfera(double raio)
{
    double volume= (4 * PI * (pow(raio, 3)))/3;

    return volume;
}

int main()
{
    double raio;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    printf("\n");

    printf("O volume da esfera de raio %.1lf eh: %.1lfcm3 \n", raio, volumeEsfera(raio));

    printf("\n");

    return 0;
}
*/


//10. Faça uma função que recebe um número como parâmetro e verifique se um ele é perfeito ou não. Um valor é dito perfeito quando ele é igual a soma dos seus divisores excetuando ele próprio. (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores). A função deve retornar 0 caso o número seja perfeito e 1 caso contrário.
/*
int numeroPerfeito(int num)
{
    int i=1, soma=0;
    
    while (i<num){

        if(num%i==0){
            soma+=i;
        }

        i++;

    }

    if (soma==num){
        return 0;
    }

    else{
        return 1;
    }

}

int main()
{
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if(numeroPerfeito(num)==0){
        printf("Esse numero eh perfeito! \n");
    }

    else{
        printf("Esse numero nao eh perfeito... \n");
    }

    return 0;
}
*/


//11. Escreva uma função que recebe um valor inteiro como parâmetro e verifica se o valor é posiOvo ou negaOvo. A função deve retornar 0 caso o número seja ppositivo e 1 caso contrário.
/*
int posNegativo(int n)
{
    if(n > 0){
        return 0;
    }

    else{
        return 1;
    }

}

int main()
{
    int n;
    printf("Informe um numero: ");
    scanf("%d", &n);
    
    if(posNegativo(n)==0){
        printf("Esse numero eh positivo.");
    }

    else{
        printf("O numero nao eh positivo.");
    }

    return 0;
}
*/


//12. Escreva uma função que recebe um valor inteiro como parâmetro e verifica se o valor é par ou ímpar. A função deve retornar 0 caso o número seja par e 1 caso contrário.
/*
int parImpar(int n)
{
    if(n % 2==0){
        return 0;
    }

    else if(n==0){
        printf("Esse numero eh zero. \n");
    }

    else{
        return 1;
    }

}

int main()
{
    int n;
    printf("Informe um numero: ");
    scanf("%d", &n);
    
    if(parImpar(n)==0){
        printf("Esse numero eh par.");
    }

    else{
        printf("O numero eh impar.");
    }

    return 0;
}
*/

