#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    //Declarando Variáveis
    int numero,i;

    //Solicitando Dados
    printf("Digite um número para verificar se ele é primo ou não: ");
    scanf("%d",&numero);

    if (numero <=1) {
        printf("Não é primo");
    } else {
        for(i=2; i < numero ; i++) {
            if(numero % i == 0){
                printf("Não é primo");
            }
        }
        if(i==numero) {
            printf("É primo");
        }
    }

    return 0; }