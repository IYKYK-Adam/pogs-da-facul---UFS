#include <stdio.h>

//1.saque
/*
int main()
{
    int saque, cin, vin, dez, cinco, um;
    
    printf("Digite o valor do saque em reais: ");
    scanf("%d", &saque);
    
    cin = saque/50;
    vin = (saque%50)/20;
    dez = (((saque%50)%20))/10;
    cinco = ((((saque%50)%20))%10)/5;
    um = (((((saque%50)%20))%10)%5)/1;

    printf("NOTAS DE RS50,00: %d\nNOTAS DE RS20,00: %d\nNOTAS DE RS10,00: %d\nNOTAS DE RS5,00: %d\nNOTAS DE RS1,00: %d\n", cin, vin, dez, cinco, um);
        
    return 0;
}
*/

//2. status da peça
/*
int main()
{
    int status, boa=0, ruim=0, cont=0;
    
    do{
        printf("A peca esta (1)boa ou (2)com defeito? ");
        scanf("%d", &status);
        if (status==1){
            boa+=1;
            cont++;
        }
        
        else if (status==2){
            ruim+=1;
            cont++;
        }
        
        else{
            printf("Status invlido, digite novamente.\n");
        }
    }while(cont<10);   
    
    printf("\n");
    printf("|APROVADAS: %d/10| \n|DESPROVADAS: %d/10| \n", boa, ruim);
    
    return 0;
}
*/

//3.
/*
int main()
{
    int menu;
    
    do{
        printf("|MENU|\n");
        printf("|1. Verde|\n|2. Amarelo|\n|3. Vermelho|\n|4. Sair|\n");
        printf("\n");
        printf("Digite uma opcao: ");
        scanf("%d", &menu);
        
        switch(menu){
            
            case 1: {
                printf("Pode passar.");
                printf(" \n");
                break;
            }
            
            case 2: {
                printf("Atencao!");
                printf(" \n");
                break;
            }
            
            case 3: {
                printf("Pare!");
                printf(" \n");
                break;
            }
            
            default:{
                printf("Opcao invalida!");
                printf(" \n");
                break;
            }
    
        }
        
    }while(menu != 4);
    
    printf(" \n");
    printf("Encerrando...\n");
    
    return 0;
}

*/

//4. corrida
/*
int main()
{
    double meta, total=0, etapa;
    int cont=0;
    
    printf("Qual sua meta de KM pra hoje? ");
    scanf(" %lf", &meta);
    
    do{
        printf("Quantos KM foram percorridos na etapa atual? ");
        scanf("%lf", &etapa);
        
        cont++;
        total += etapa;
        
    }while (total < meta);
    
    printf("META DO DIA ATINGIDA!! \n|Distancia total: %.2lf| \n|QTD de etapas: %d| \n", total, cont);
    
    return 0;
}
*/

//5.candidatos
/*
int main()
{
    int idade, cont=1, cont2=0;
    double nota, notas, media;
    
    do{
        
        printf("Qual a idade do %d° participante? ", cont);
        scanf(" %d", &idade);
        
        if (idade>0){
            
            printf("Qual a nota do %d° participante? ", cont);
            scanf(" %lf", &nota);
            
            cont++;
            
            if (idade >= 18){
            cont2++;
            notas+=nota;
            }
        }
        
        else if(idade<0){
            printf("Idade invalida! \n");
        }
        
        
        
    }while (idade !=0);
    
    media = notas/cont2;
    
    printf(" \n");
    printf("|A media da nota dos canditados maiores: %.2lf| \n", media);
    
    return 0;
}
*/
