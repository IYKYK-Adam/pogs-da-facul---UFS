#include <stdio.h>

//6. caixa
/*
int main()
{
    int qnt_products=0;
    double preco, preco_total;
    
    do{
        printf("Digite o valor do produto: ");
        scanf(" %lf", &preco);
        
        printf(" \n");
        
        if (preco < 0){
            printf("Erro: valor informado eh invalido \n");
            printf("Digite outro valor. \n");
            
            printf(" \n");
        }
        
        else if (preco > 0){
            qnt_products++;
            preco_total+=preco;
        }
        
    }while(preco!=0);
    
    printf("|VALOR TOTAL: RS%.2lf| \n|QUANTIDADE DE PRODUCTS: %d| \n", preco_total, qnt_products);
    
    return 0;
}
*/

//7.cantina
/*
int main()
{
    double preco, preco_total, qnt_products=0;
    
    do{
        printf("Digite o valor da venda: ");
        scanf(" %lf", &preco);
        
        printf(" \n");
        
        if (preco < 0){
            printf("Erro: valor informado eh invalido \n");
            printf("Digite outro valor. \n");
            
            printf(" \n");
        }
        
        else if (preco > 0){
            qnt_products++;
            preco_total+=preco;
        }
        
    }while(preco!=0);
    
    printf("|VALOR TOTAL: RS%.2lf| \n|QUANTIDADE DE VENDAS: %.0lf| \n|MEDIA DAS VENDAS: RS%.2lf|", preco_total, qnt_products, preco_total/qnt_products);
    
    return 0;    
}
*/

//8.calculadora
/*
int main()
{
    int menu;
    float n1, n2;
    
    do{
        printf("|DIGITE OS NUMEROS PARA AS OPERACOES| \n");
        
        printf("digite o primeiro numero: ");
        scanf(" %f", &n1);
        
        printf("digite o segundo numero: ");
        scanf(" %f", &n2);
        
        printf(" \n");
        
        printf("|MENU| \n");
        printf("1.SOMA \n2.SUBTRAIR \n3.MULTIPLICAR \n4.DIVIDIR \n0. SAIR \n");
        printf("Escolha uma opcao do menu: ");
        scanf("%d", &menu);
        
        printf(" \n");
        
        switch(menu){
            
            case 1:
                printf("|%.2f+%.2f=%.2f| \n", n1, n2, n1+n2);
                printf(" \n");
                
                break;
            
            case 2:
                printf("|%.2f-%.2f=%.2f| \n", n1, n2, n1-+n2);
                printf(" \n");
                
                break;
            
            case 3:
                printf("|%.2f*%.2f=%.2f| \n", n1, n2, n1*n2);
                printf(" \n");
                
                break;
            
            case 4:
                while(n2==0){
                    printf("O denominador da divisao nao pode ser igual a 0. \n");
                    printf(" \n");
                    printf("Digite o segundo numero novamente: ");
                    scanf(" %f", &n2);
                    printf(" \n");
                }
                
               printf("|%.2f/%.2f=%.2f| \n", n1, n2, n1/n2);
               printf(" \n"); 
            
                break;
            
            default:
                if(menu !=0){
                    printf("Opcao invalida! Escolha uma opcao do menu. \n");
                    printf(" \n");
                }
            }
        
    }while(menu != 0);
    
    printf(" \n");
    printf("Encerrando...");
    
    return 0;
}
*/
//9.
/*
int main(){
    int n=67, tent, cont;
    
    for(cont=0; cont<5; cont++){
        printf("Dica: numero entre 1 e 100 \n");
        printf("tente acertar o numero: ");
        scanf(" %d", &tent);
        
        printf(" \n");
        
        if(tent == n){
            printf("PARABENS ! vc arrasa. \n");
            printf(" \n");
            return 0;
        }
        
        else if(tent<n && cont<=4){
            printf("Poxa, tente um numero maior. \n");
            printf(" \n");
        }
        
        else if(tent>n && cont<=4){ 
            printf("Poxa, tente um numero menor. \n");
            printf(" \n");
        }
        
        else if(tent <1 || tent >100){
            printf("Numero fora da dica, vamo presta atencao..\n");
            printf(" \n");
            cont=cont-1;
        }
        
    }
    
    printf("perdeu hahaha \n");
    printf(" \n");
    
    return 0;
}
*/