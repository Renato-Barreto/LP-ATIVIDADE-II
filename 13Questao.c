//Crie um programa que solicite do usuário dois 
//números inteiros e informe qual destes números é o maior e qual é o menor.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
    setlocale(LC_ALL,"portuguese");
    
    //Declarando variáveis
    int primeiroNumero;
    int segundoNumero;

    //Solicitando informações

    printf("Digite o primeiro número: ");
    scanf("%i", &primeiroNumero);

    printf("Digite o segundo número: ");
    scanf("%i", &segundoNumero);

    if (primeiroNumero > segundoNumero)
    {
        printf("%i é maior que %i",primeiroNumero,segundoNumero);
    } else
        printf("%i é maior que %i",segundoNumero,primeiroNumero);
    
    
    return 0;
}