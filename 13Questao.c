//Crie um programa que solicite do usu�rio dois 
//n�meros inteiros e informe qual destes n�meros � o maior e qual � o menor.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
    setlocale(LC_ALL,"portuguese");
    
    //Declarando vari�veis
    int primeiroNumero;
    int segundoNumero;

    //Solicitando informa��es

    printf("Digite o primeiro n�mero: ");
    scanf("%i", &primeiroNumero);

    printf("Digite o segundo n�mero: ");
    scanf("%i", &segundoNumero);

    if (primeiroNumero > segundoNumero)
    {
        printf("%i � maior que %i",primeiroNumero,segundoNumero);
    } else
        printf("%i � maior que %i",segundoNumero,primeiroNumero);
    
    
    return 0;
}