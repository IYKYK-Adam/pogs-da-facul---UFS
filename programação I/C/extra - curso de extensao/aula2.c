#include <stdio.h>
#include <math.h>

//1. clube
/*
int main()
{
    int idade, conv;
    
    printf("|DADOS DO USUARIO| \n");
    printf(" \n");
    
    printf("Qual dua idade? ");
    scanf(" %d", &idade);
    
    printf("Tem convite especial? (1 = sim, 0 = nao) ");
    scanf(" %d", &conv);
    
    if (idade >= 18){
        printf("|ACESSO PERMITIDO| \n");
    }
    
    else if (idade < 18 && idade >=12 && conv == 1){
        printf("|ACESSO PERMITIDO| \n");
    }
    
    else{
        printf("|ACESSO NEGADO| \n");
    }

    return 0;
}
*/

//2.humor
/*
int main()
{
    int n_atp, n_pac;
    
    printf("|DE 0 ATE 10, AVALIE: | \n");
    
    printf("Seu nivel de energia: ");
    scanf("%d", &n_atp);
    
    printf("Seu nivel de paciencia: ");
    scanf("%d", &n_pac);
    
    if (n_atp >= 7 && n_pac >= 7){
        printf("vc ta otimo vey! \n");
    }
    
    else if (n_atp >= 7 && n_pac < 7){
        printf("se acalme. \n");
    }
    
    else if (n_atp < 7 && n_pac >= 7){
        printf("vc ta tranquilo.. \n");
    }
    
    else {
        printf("vc precisa de ferias! \n");
    }
    
    return 0;
}
*/

//3.novos devs
/*
int main()
{
    int cont=0, aptdao=0, soma=0, refazer=0;
    double nota, media, part;
    
    printf("|DADOS DO PROCESSO SELETIVO| \n");
    
    printf("Quantidade de participantes: ");
    scanf(" %lf", &part);
    
    do{    
        printf("Nota do participante (de 0 a 10): ");
        scanf(" %lf", &nota);
        
        if (nota < 0 || nota > 10){
            printf("ERRO! Digite uma nota valida! \n");
        }
        
        else {
            soma += nota;
            
            if (nota >= 7){
                aptdao++;
            }
            
            else{
                refazer++;
            }
            
            cont ++;
        }
    }while(cont < part);
    
    media = soma / part;
    
    printf(" \n");
    printf("|RESULTADOS| \n");
    printf(" \n");
    
    printf("MEDIA GERAL: %.2lf \n", media);
    printf("PARTICIPANTES APTOS: %d \n", aptdao);
    printf("REFAZER TREINMENTO: %d \n", refazer);
    
    if (aptdao > refazer){
        printf("STATUS: MAIORIA APTO! \n");
    }
    
    else{
        printf("STATUS: MAIORIA INAPTO! \n");
    }
    
    retun 0;
}
*/