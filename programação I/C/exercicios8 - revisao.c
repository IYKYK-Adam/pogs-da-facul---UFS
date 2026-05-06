#include <stdio.h>

//1.
/*
int main()
{
    int cod;

    printf("Escolha uma opcao: ");
    scanf("%d", &cod);

    switch (cod)
    {
        case 1:{
            printf("Alimentacao nao perecivel");
            break;
        }
        
        case 2:{
            printf("Alimento perecivel");
            break;
        }

        case 3:{
            printf("Vestuario");
            break;
        }

        case 4:{
            printf("Limpeza");
            break;
        }

        default:
            printf("Codigo invalido!");
            break;
    }

    return 0;
}
*/

//2.
/*
int main()
{
    double n1, n2, n3, me, media;
    int ra;
    char conc;

    printf("|DADOS DO ALUNO| \n");

    printf("Digite o RA do aluno: ");
    scanf("%d", &ra);

    printf("Digite a primeira nota do aluno: ");
    scanf(" %lf", &n1);

    printf("Digite a segunda nota do aluno: ");
    scanf(" %lf", &n2);

    printf("Digite a terceira nota do aluno: ");
    scanf(" %lf", &n3);

    printf("Digite a media da nota dos exercicios: ");
    scanf(" %lf", &me);

    media = (n1+n2*2+n3*3+me)/7;

    if (media>=90){
        conc='A';
        
    }

    else if (media<90 && media>=75){
        conc='B';
    }

    else if (media<75 && media>=60){
        conc= 'C';
    }

    else if (media<60 && media>=40){
        conc= 'D';
    }

    else{
        conc= 'E';
    }

    printf("|RESULTADOS| \n");
    printf("RA: %d \n", ra);
    printf("Conceito: %c \n", conc);
    printf("NOTA 1: %.1lf\nNOTA 2: %.1lf\nNOTA 3: %.1lf \nMEDIA DE EXERCICIOS: %.1lf \nMEDIA FINAL: %.1lf \n", n1, n2, n3, me, media);

    if(conc == 'A' || conc == 'B' || conc == 'C'){
        printf("STATUS: Aprovado");
    }

    else{
        printf("STATUS: Reprovado");
    }
}
*/

//3.
/*
int main()
{
    int T=0, B=0, R=0, cont=0;
    char tipo;

    do{
        printf("|TIPOS DE VINHO| \n");
        printf("T-tinto \nB-branco \nR-rose \nF-sair \n");
        printf("Digite o tipo do vinho: ");
        scanf(" %c", &tipo);
        printf(" \n");

        switch (tipo)
        {
           // case 't':
            case 'T':{
                T++;
                cont++;
                break;
            }

            //case 'b':
            case 'B':{
                B++;
                cont++;
                break;
            }

            //case 'r':
            case 'R':{
                R++;
                cont++;
                break;
            }

            case 'F':{
                printf("Finalizando... \n");
                printf("\n");
                break;
            }
            
            default:{
                printf("Opcao invalida! \n");
                printf(" \n");
                break;
            }
                
        }
    }while (tipo != 'F');
    
    printf("|RESULTADOS| \n");
    printf("TINTO: %d \nBRANCO: %d \nROSE: %d \nTOTAL: %d \n", T, B, R, cont);

    return 0;
}
*/

//4.
/*
int main()
{
    int voto, c1=0, c2=0, c3=0, c4=0, n=0, b=0, cont=0;

    do{
        printf("Digite seu voto: ");
        scanf("%d", &voto);

        switch (voto)
        {
            case 1:{
                c1++;
                break;
            }

            case 2:{
                c2++;
                break;
            }
            
            case 3:{
                c3++;
                break;
            }

            case 4:{
                c4++;
                break;
            }

            case 5:{
                n++;
                break;
            }

            case 6:{
                b++;
                break;
            }

            case 0:{
                printf("Apurando resultados... \n");
                printf(" \n");
                break;
            }

            default:{
                printf("Opcao invalida! \n");
                printf(" \n");
                break;
            }
        }

    }while (voto !=0);

    printf("|RESULTADOS| \n");
    printf("CANDIDATO 1: %d \nCANDIDATO 2: %d \nCANDIDATO 3: %d \nCANDIDATO 4: %d \nNULO: %d \nEM BRANCO: %d \n", c1, c2, c3, c4, n, b);
    
    return 0;
}
*/

//5.
/*
int main()
{
    int bits, cin, dez, cinco, um;
    do{
        printf("Digite um valor inteiro para retirar: BS");
        scanf("%d", &bits);

        cin = bits/50;
        dez = (bits%50)/10;
        cinco = ((bits%50)%10)/5;
        um = (((bits%50)%10)%5)/1;

        printf("|TOTAL DE CEDULAS| \n");
        printf("BS50,00: %d \nBS10,00: %d \nBS5,00: %d \nBS1,00: %d \n", cin, dez, cinco, um);

        printf("\n");
    }while (bits !=0);
    
    printf("Finalizando... \n");
    return 0;
}
*/

























































