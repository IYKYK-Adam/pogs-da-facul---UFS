#include<stdio.h>
#include <math.h>
//1.
/*
int main()
{
    char tipo;
    double tempo, valor;

    printf("|INFORMACOES DO VEICULO| \n");
    printf("Digite o tempo de permanencia (em horas): ");
    scanf(" %lf", &tempo);

    printf("Digite o tipo de veiculo(M-moto, C-carro, O-Caminhoes/onibus/outros): ");
    scanf(" %c", &tipo);

    if(tempo<1){
        tempo=1;
    }

    switch (tipo)
    {
        case 'm':
        case 'M':{
            if (tempo>5){
                valor=(tempo*5)-((tempo*5)*0.1);
            }

            else{
                valor=(tempo*5);
            }
            break;
        }

        case 'c':
        case 'C':{
            if (tempo>5){
                valor=(tempo*10)-((tempo*10)*0.1);
            }

            else{
                valor=(tempo*10);
            }
            break;
        }

        case 'o':
        case 'O':{
            if (tempo>5){
                valor=(tempo*20)-((tempo*20)*0.1);
            }

            else{
                valor=(tempo*20);
            }
            break;
        }
        
        
        default:{
            printf("Vaiculo não autorizado!");
            return 0;
            break;
        }
    }

    printf("|O VALOR A PAGAR EH: RS%.2lf| \n", valor);

    return 0;
}
*/

//2.
/*
int main()
{
    int l, aux, i;

    printf("Digite o valor do lado: ");
    scanf("%d", &l);

    for(i=1; i<=l; i++)
    {
        for(aux=1; aux<=i; aux++){
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
*/

//3.
/*
int main()
{
    double temp, maior, menor, soma;
    int cont=1;

    printf("Digite a 1° temperatura: ");
    scanf("%lf", &temp);

    soma+=temp;
    maior=temp;
    menor=temp;

    cont++;

    while (cont<11)
    {
        printf("Digite a %d° temperatura: ", cont);
        scanf("%lf", &temp);

        if(temp>maior){
            maior=temp;
        }

        if(temp<menor){
            menor=temp;
        }

        soma+=temp;
        cont++;
    }
    
    printf("|RESULTADOS| \n");
    printf("MAIOR TEMPERATURA: %.1lf° \nMENOR TEPERATURA: %.1lf° \nMEDIA DE TEMPERATURAS: %.1lf° \n", maior, menor, soma/10);

    return 0;
}
*/

//4.
/*
int main()
{
    double v1, v2, i, f, c;
    int op;

    do{

        printf("|MENU| \n");
        printf("1.Converter de Celsius para Fahrenheit. \n2.Converter de Fahrenheit para Celsius. \n3.Sair \n");
        printf("Escolha uma opcao do menu: ");
        scanf("%d", &op);
        
        switch (op)
        {
            case 1:{
                printf("\n");

                printf("Digite a tempatura inicial: ");
                scanf("%lf", &v1);

                printf("Digite a tempatura final: ");
                scanf("%lf", &v2);

                printf("\n");

                for (i=v1; i<=v2; i+=1){
                    f=(i*1.8)+32;
                    
                    printf("%.1lf : %.1lf \n", i, f);
                }

                printf("\n");

                break;
            }

            case 2:{
                printf("\n");

                printf("Digite a tempatura inicial: ");
                scanf("%lf", &v1);

                printf("Digite a tempatura final: ");
                scanf("%lf", &v2);

                printf("\n");

                for (i=v1; i<=v2; i+=1){
                    c=(i-32)/1.8;
                    
                    printf("%.1lf : %.1lf \n", i, c);
                }

                printf("\n");

                break;
            }

            default: {
                printf("Opcao invalida! \n");
                break;
            }

        }

        printf("\n");
    }while (op!=3);
    
    printf("Finalizando... \n");
    printf("\n");

    return 0;
}
*/

//5.
/*
int main()
{
    int menu; 
    double saldo=1000, dep, saq;

    do{
        printf("\n");

        printf("|MENU| \n");
        printf("1.Ver saldo. \n2.Deposito. \n3.Saque. \n4.Sair \n");
        printf("Escolha uma opcao: ");
        scanf("%d", &menu);

        printf("\n");

    

        switch (menu)
        {
            case 1:{
                printf("Seu saldo eh: RS%.2lf \n", saldo);
                break;
            }

            case 2:{
                printf("Digite o valor ser depositado: RS");
                scanf("%lf", &dep);

                saldo+=dep;
                printf("Deposito feito com sucesso! \n");

                break;
            }

            case 3:{
                printf("Digite o valor ser sacado: RS");
                scanf("%lf", &saq);

                if(saq <= saldo){
                    saldo-=saq;
                    printf("Saque retirado com sucesso! \n");
                }

                else{
                    printf("Saldo insuficiente para saque! \n");
                }

                break;
            }
            
            case 4:{
                break;
            }

            default: {
                printf("Opcao invalida! \n");
                break;
            }
        }

    }while (menu!=4);
    
    printf("Finalizando... \n");
    printf("\n");

    return 0;
}
*/

//////////PROVA ANTIGA//////////

//1.
/*
int main()
{
    double x, y, z;
    printf("informe os valores de x e y: ");
    scanf("%lf %lf", &x, &y);
    z = pow(x,y);
    printf("x^y: %.2lf", z);
    return 0;
}
*/

//2.
/*
int main()
{
    int x, y, produto, auxiliar;
    printf("Informe dois números: ");
    scanf("%d %d",&x, &y);
    produto=0;
    auxiliar=y;
    while (auxiliar > 0){
        produto = produto + x;
        auxiliar--;
    }
        
    printf("\nResultado: %d", produto);

    return 0;
}
*/

//3.
/*
int main()
{
    int menu, desc, cont = 0;
    double total = 0, por = 0, desc_total;

    while (menu != 6) {
        printf("\n|MENU|\n");
        printf("1. Shampoo: R$ 35,00\n");
        printf("2. Condicionador: R$ 39,00\n");
        printf("3. Creme de Pentear: R$ 27,00\n");
        printf("4. Hidratante: R$ 55,00\n");
        printf("5. Ampola de Vitamina C: R$ 12,00\n");
        printf("6. Sair\n");
        printf("Escolha um item do menu: ");
        scanf("%d", &menu);
        print("\n");

        switch(menu) {
            case 1: {
                total += 35;
                cont++;
                printf("Item adicionado!\n");
                break;
            }
            case 2: {
                total += 39;
                cont++;
                printf("Item adicionado!\n");
                break;
            }
            case 3: {
                total += 27;
                cont++;
                printf("Item adicionado!\n");
                break;
            }
            case 4: {
                total += 55;
                cont++;
                printf("Item adicionado!\n");
                break;
            }
            case 5: {
                total += 12;
                cont++;
                printf("Item adicionado!\n");
                break;
            }

            case 6:{
                break;
            }

            default: {
                printf("Opçao invalida!\n");
                break;
            }
        }
    }

    printf("Possui cupom de desconto? 1-sim 2-nao: ");
    scanf("%d", &desc);

    if (desc == 1) {
        printf("Qual a porcentagem do desconto? ");
        scanf("%lf", &por);
        desc_total = total - (total * (por / 100));
    }

    else if(desc == 2) {
        desc_total=total;
    }

    print("\n");
    printf("|RESULTADO DA COMPRA| \n");
    printf("Quantidade de produtos: %d \nValor total: R$ %.2lf\nTotal com desconto: R$ %.2lf\n", cont, total, desc_total);

    return 0;
}
*/

//4.
/*
int main()
{
    int a;
    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("\nO numero digitado foi: %d \n", a);

    return 0;
}
*/


