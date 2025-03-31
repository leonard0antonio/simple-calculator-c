#include <stdio.h>


//Jose miguel
//Leonardo Antonio

int main() {
    char operador = ' ';  
    float resultado, numero;

    printf("Digite o primeiro numero: ");
    scanf("%f", &resultado);  

    while (operador != '=') {
       
		fflush(stdin); //limpa o buffer pra nao pular o operador 
		
        printf("Digite o operador: ");
        scanf("%c", &operador);  

        if (operador == '=') break; // sai do while

        printf("Digite o segundo numero: ");
        scanf("%f", &numero);  

        if (operador == '+') {
            resultado += numero;
        } else if (operador == '-') {
            resultado -= numero;
        } else if (operador == '*') {
            resultado *= numero;
        } else if (operador == '/') {
            if (numero == 0) {
                printf("Erro, divisao por 0!\n");
                continue;  //pular caso seja 0
            }
            resultado /= numero;
        } else {
            printf("Operador invalido!\n");
            continue; 
        }

        
        printf("Resultado atual: %.2f\n", resultado); //resultado a cada iteiracao
    }

    printf("Resultado final: %.2f\n", resultado);  
    return 0;
}