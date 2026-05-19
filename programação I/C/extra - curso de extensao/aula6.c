#include <stdio.h>

//1.
/*
int main()
{
    double kwh, tarifa, maior=0, total=0, mes1, mes2, mes3, mes4, mes5;
    int cont=1;
    
    do{
        printf("Digite o consumo do mes %d: ", cont);
        scanf(" %lf", &kwh);
        
        if(kwh>0 && kwh<=100){
            tarifa = kwh * 0.40;
            total+=tarifa;
            
            if (tarifa>maior){
                maior=tarifa;
            }
            
            if(cont == 1){
                mes1=tarifa;
            }
            
            if(cont == 2){
                mes2=tarifa;
            }
            
            if(cont == 3){
                mes3=tarifa;
            }
            
            if(cont == 4){
                mes4=tarifa;
            }
            
            if(cont == 5){
                mes5=tarifa;
            }
            
            
        }
        
        else if(kwh>100 && kwh<=300){
            tarifa = kwh * 0.65;
            total+=tarifa;
            
            if (tarifa>maior){
                maior=tarifa;
            }
            
            if(cont == 1){
                mes1=tarifa;
            }
            
            if(cont == 2){
                mes2=tarifa;
            }
            
            if(cont == 3){
                mes3=tarifa;
            }
            
            if(cont == 4){
                mes4=tarifa;
            }
            
            if(cont == 5){
                mes5=tarifa;
            }
        }
        
        else if(kwh>300){
            tarifa = kwh * 0.85;
            total+=tarifa;
            
            if (tarifa>maior){
                maior=tarifa;
            }
            
            if(cont == 1){
                mes1=tarifa;
            }
            
            if(cont == 2){
                mes2=tarifa;
            }
            
            if(cont == 3){
                mes3=tarifa;
            }
            
            if(cont == 4){
                mes4=tarifa;
            }
            
            if(cont == 5){
                mes5=tarifa;
            }
        }
        
        else{
            printf("Valor invalido! \n");
            cont--;
        }
        
        cont++;
    }while(cont<6);
    
    
    printf("|RESULTADOS| \n");
    printf("Mes 1: RS%.2lf \nMes 2: RS%.2lf \nMes 3: RS%.2lf \nMes 4: RS%.2lf \nMes 5: RS%.2lf \n", mes1, mes2, mes3, mes4, mes5);
    printf("TOTAL: RS%.2lf \n", total);
    printf("MES COM MAIOR GASTO \n");
    if(maior==mes1){
        printf("> Mes 1: RS%.2lf", maior);
    }
    
    else if(maior==mes2){
        printf("> Mes 2: RS%.2lf", maior);
    }
    
    else if(maior==mes3){
        printf("> Mes 3: RS%.2lf", maior);
    }
    
    else if(maior==mes4){
        printf("> Mes 4: RS%.2lf", maior);
    }
    
    else if(maior==mes5){
        printf("> Mes 5: RS%.2lf", maior);
    }
    
    return 0;
}
*/

//2.
/*
int main()
{
    int op, est=0, prof=0, vis=0, maior=0, total;
    
    do{
        printf("|MENU| \n");
        printf("1.Estudante \n2.Professor/Tecnico \n3.Visitante \n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);
        
        printf("\n");
        
        switch(op){
            case 1:{
                est++;
                
                break;
            }
            
            case 2:{
                prof++;
                
                break;
            }
            
            case 3:{
                vis++;
                
                break;
            }
            
            case 0:{
                break;
            }
            
            default:{
                printf("Opcao invalida! \n");
                printf("\n");
                break;
            }
        }
        
    }while(op!=0);
    
    total = est+prof+vis;
    
    printf("|RESULTADOS| \n");
    printf("TOTAL DE REFEICOES: %d \n", total);
    
    if(est>prof && est>vis){
        printf("MAIOR NUMERO DE ACESSO POR: estudantes \n");
    }
    
    else if(prof>est && prof>vis){
        printf("MAIOR NUMERO DE ACESSO POR: Professores/Tecnicos \n");
    }
    
    else{
        printf("MAIOR NUMERO DE ACESSO POR: Visitantes \n");
    }
    
    if (est>0.5*total){
        printf("Subsidio pleno aplicado. \n");
    }
    
    else{
        printf("Subsidio regular aplicado. \n");
    }
    
    return 0;
}
*/

//3.O dono de uma padaria quer saber se vai conseguir atender os pedidos do dia sem ficar sem estoque. Para cada produto, ele informa a quantidade em estoque e a quantidade pedida pelos clientes. O programa deve calcular o percentual do estoque que será consumido e classificar a situação. Escreva um programa em C com duas funções:
    // a. calcular Percentual: recebe a quantidade em estoque e a quantidade pedida e retorna o percentual consumido como um número real.
    // b. classificar: recebe o percentual consumido e retorna um inteiro representando a situação: 0 para estoque tranquilo (abaixo de 50%), 1 para estoque no limite (entre 50% e 99%) e 2 para estoque insuficiente (100% ou mais) 
// Na main, repita o processo para 3 produtos, exibindo o percentual e a mensagem correspondente para cada um. Rejeite entradas onde o estoque ou o pedido seja menor ou igual a zero, pedindo novamente até que valores válidos sejam digitados.
/*
double calcularPercentual(double qtdEstoque, double qtdPedida)
{
    double percentual =(qtdPedida/qtdEstoque)*100;

    return percentual;
}

int classificar(double percentual)
{
    if (percentual<50){
        return 0;
    }

    else if (percentual>=50 && percentual<=99){
        return 1;
    }

    else{
        return 2;
    }
}

int main()
{
    double qtdEstoque, qtdPedida;
    double percentual;

    for (int i=1; i<4;i++)
    {   
        printf("|PEDIDO %d| \n", i);
        printf("Insira a quantidade em estoque: ");
        scanf("%lf", &qtdEstoque);

        printf("Insira a quantidade do pedido: ");
        scanf("%lf", &qtdPedida);

        printf("\n");
        
        if (qtdPedida<=0 || qtdEstoque<=0){
            
            printf("Algum dos valores ta igual ou menor que 0! Insira novamente... \n");
            i--;
            printf("\n");
        }

        else{
            percentual = calcularPercentual(qtdEstoque, qtdPedida);

            printf("|PEDIDO %d| \n", i);
            printf("PERCENTUAL: %.1lf%% \n", percentual);
                if(classificar(percentual)==0){
                    printf("status: ESTOQUE TRANQUILO \n");
                }

                else if(classificar(percentual)==1){
                    printf("status: ESTOQUE NO LIMITE \n");

                }   

                else{
                    printf("status: ESTOQUE INSUFICIEMTE \n");
                }
            
            printf("\n");
        }

    }

    return 0;
}
*/

