#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//DESAFIO//
//1.jogo da adivinhação
/*
Implemente um jogo em que um número entre 1 e 100 é escolhido de forma aleatória (pesquisem a função na internet) e um jogador deve tentar adivinhar o número.

Para esse jogo, implemente as seguintes funções:

    - int gerarNumeroSecreto(): função que retorna um número aleatório entre 1 e 100.
    - void darDica(int palpite, int secreto): Imprime se o palpite foi "Muito Alto", "Muito Baixo" ou "Correto".

    Na função principal: o usuário deve escolher um número até que ele consiga acertar o número. Ao fim, o seu algoritmo deve imprimir a quantidade de tentativas que o usuário fez.
*/
/*
int random()
{
    return rand() % 100 + 1;
}

void darDica(int palpite, int secreto)
{

    if (palpite<secreto){
        printf("MUITO BAIXO!! tente de novo pfvr (￢_￢;) \n");
        printf("\n");
    }

    else if (palpite>secreto){
        printf("MUITO ALTO!! vamos ver se vc consegue dessa vez.. (/ˍ< 、) \n"); //(×_×)
        printf("\n");
    }

    else{
        printf("PARABENS VC ARRASA!! \\(￣▽￣)/ \n");
    }
}

int main()
{
    srand(time(NULL));

    int palpite, secreto, tent=0;

    secreto = random();

    printf("\n");
    printf("~~~~~~~~~~~|TESTES|~~~~~~~~~~~\n");
    printf("NUMERO SECRETO: %d \n", secreto);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\n");

    printf("~~~~~~|JOGO DE ADIVINHACAO|~~~~~~ \n");
    printf("\n");
    printf("~~~~~~~~~~~~regras~~~~~~~~~~~~\n");
    printf("1. Chutes entre 0 e 100 \n2. apenas numeros inteiros \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\n");

    printf("~~~~~~! AGORA EH SUA VEZZ !~~~~~~ \n");

    do{
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        if(palpite<0 || palpite>100){ //para verificar se eh inteiro tem q transforma tudo em double
            printf("\n");
            printf("PRESTA ATENÇÃO!!! Palpite fora da regra! (; 一_一) \n");
            printf("vou te dar so mais uma chance...\n");
            printf("\n");

        }

        else{
            if (palpite != secreto) {
                tent++;
            }

            printf("\n");
            darDica(palpite, secreto);
        }

    }while (palpite != secreto);
    
    if (tent>1){
        printf("so foram precisos %d tentativas... (*´▽)", tent);
    }

    else if(tent==0){
        printf("FOI DE PRIMEIRA!! (%d tentativas) (*´▽)", tent);
    }
    
    else{
        printf("so foi preciso %d tentativa... (*´▽)", tent);
    }

    return 0;
}
*/


//2.O tabuleiro circular
/*
Neste desafio, deve-se programar uma corrida entre dois competidores em uma pista circular composta por 20 casas (numeradas de 0 a 19). A cada rodada um dado é lançado para cada jogador, fazendo-os avançar no tabuleiro. O vencedor será o jogador que finalizar três voltas primeiro.

Para esse jogo, duas funções devem ser implementadas:
    - int moverJogador(int posicaoAtual, int passos): Deve verificar se a nova posição ultrapassou o limite de 20. Se ultrapassar, deve aplicar a lógica de "dar a volta" no tabuleiro (ex: posição 19 + 3 passos = posição 2).
    - void desenharPista (int pos1, int pos2): Deve imprimir 20 espaços na tela, colocando um "A" na posição do primeiro jogador e um "B" na do segundo. Isso vai gerar uma linha visual como: ...A......B.........
*/
/*
int moverJogador(int posicaoAtual, int passos)
{
    int novaPosicao;

    novaPosicao = posicaoAtual + passos;

    if (novaPosicao >= 20) {
        novaPosicao = novaPosicao - 20;
    }

    return novaPosicao;
}

void desenharPista(int pos1, int pos2, char j1, char j2)
{
    for (int i = 0; i < 20; i++) {
        if (i == pos1 && i == pos2) {
            printf("X");
        }
        else if (i == pos1) {
            printf("%c", j1);
        }
        else if (i == pos2) {
            printf("%c", j2);
        }
        else {
            printf(".");
        }
    }

    printf("\n");
}

int jogarDado()
{
    return rand() % 6 + 1;
}

int main()
{
    srand(time(NULL));

    int posA = 0, posB = 0;
    int voltasA = 0, voltasB = 0;
    int dadoA, dadoB;
    int rodada = 1;

    char j1, j2;

    printf("\n");
    printf("~~~~ |CORRIDA CIRCULAR| ~~~~\n");
    printf("\n");

    printf("|ESCOLHA O NOME DOS JOGADORES| \n");
    printf("Digite duas inicais: \n");
    printf(">> ");
    scanf(" %c", &j1);
    printf(">> ");
    scanf(" %c", &j2);

    while (voltasA < 3 && voltasB < 3) {
        printf("|Rodada %d|\n", rodada);

        dadoA = jogarDado();
        dadoB = jogarDado();

        printf(">> Jogadora(r) %c tirou: %d\n", j1, dadoA);
        printf(">> Jogadora(r) %c tirou: %d\n", j2, dadoB);

        if (posA + dadoA >= 20) {
            voltasA++;
        }

        if (posB + dadoB >= 20) {
            voltasB++;
        }

        posA = moverJogador(posA, dadoA);
        posB = moverJogador(posB, dadoB);

        desenharPista(posA, posB, j1, j2);

        printf("Voltas %c: %d\n", j1, voltasA);
        printf("Voltas %c: %d\n", j2, voltasB);
        printf("\n");

        rodada++;
    }

    if (voltasA >= 3 && voltasB >= 3) {
        printf("Empate!\n");
        printf("\n");
    }
    else if (voltasA >= 3) {
        printf("Jogadora(r) %c venceu!\n", j1);
        printf("\n");
    }
    else {
        printf("Jogadora(r) %c venceu!\n", j1);
        printf("\n");
    }

    return 0;
}
*/