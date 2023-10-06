#include <stdio.h>


double soma(double numX, double numY){
    return numX + numY;
}
double subtrai(double numX, double numY){
    return numX - numY;
}
double dividir(double numX, double numY){
    if(numY != 0){
        return numX / numY;
    }else{
        printf("ERRO! Não permitido a divisão por 0 ");
        return 0.0;
    }
}
double multiplicar(double numX, double numY){
    return numX * numY;
}


int main(double numX, double numY, double result){

    char oper;
    printf("*** CALCULADORA ***\n");
    printf("Qual operação deseja realizar? ");
    scanf("%c", &oper);

    printf("| INFORME O PRIMEIRO VALOR: ");
    scanf("%lf", &numX);
    printf("| INFORME O SEGUNDO VALOR: ");
    scanf("%lf", &numY);

    switch(oper){
        case '+':
            result = soma(numX, numY);
            break;
        case '-':
            result = subtrai(numX, numY);
            break;
        case '*':
            result = multiplicar(numX, numY);
            break;
        case '/':
            result = dividir(numX, numY);
            break;
        default:
            printf("| OPERAÇÃO INVALIDA!");

    }

    printf("| RESULTADO: %.2lf\n", result);

    return 0;
}
