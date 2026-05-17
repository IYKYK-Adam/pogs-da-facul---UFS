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

//3.

int main()
{
    
    
    return 0;
}