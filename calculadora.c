// calculadora com operações básicas

#include <stdio.h>

int main(void){
    // DECLARAR VARIÁVEIS
    float x=0, y=0, resultado=0;
    int op=0;
    // 
    do{
        printf("\n\t1 - SOMAR\n\t2 - SUBTRAIR\n\t3 - MULTIPLICAR\n\t4 - DIVIDIR\n\tESCOLHA UMA OPCAO:"); // Escolher uma operação
        scanf("%i", &op);
        printf("\nDigite o primeiro numero: "); // Receber 1 numero
        scanf("%f", &x);
        printf("\nDigie o segundo numero: ");  // Receber outro numero
        scanf("%f", &y);
        switch (op){
        case 1:
            resultado = x+y; // Operação de adição
            break;
        case 2:
            resultado = x-y; // Operação de subtração   
            break;
        case 3:
            resultado = x*y; // Operação de multiplicação
            break;
        case 4:
            resultado = x/y; // Operação de divisão
            break;   
        default:
            printf("\n Digite uma opcao valida: \n");
            break;
        }
        printf("\n\t O resultado e: %0.2f", resultado); // Exibir resultado
        printf("\n Digite 1 para continuar ou 0 para encerrar: "); // Continuar ou encerrar operação.
        scanf("%i", &op);

    }while(op==1);

}