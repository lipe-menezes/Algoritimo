#include <stdio.h>

int main (){
    float n1,n2;
    char operador;

    printf("Digite um numero:\n");
    scanf("%f",&n1);
        printf("Digite a operação necessaria:\n");
    scanf("%c",&operador);
        printf("Digite um segundo numero:\n");
    scanf("%f",&n2);

    switch (operador){
        case '+':
        printf("Primeiro numero:%.1f\nSegundo numero:%.1f\nResultado:%.1f\n",n1,n2, n1+n2);
        break;
                case '-':
        printf("Primeiro numero:%.1f\nSegundo numero:%.1f\nResultado:%.1f\n",n1,n2, n1-n2);
        break;
                case '*':
        printf("Primeiro numero:%.1f\nSegundo numero:%.1f\nResultado:%.1f\n",n1,n2, n1*n2);
        break;
                case '/':
        printf("Primeiro numero:%.1f\nSegundo numero:%.1f\nResultado:%.1f\n",n1,n2, n1/n2);
        break;
    }




    return 0;
}