//Implemente um programa que solicite do usuário números inteiros e verifique quantos números são pares 
//e quantos são ímpares. Além disto, deve ser exibido a média aritm��ica de n�meros pares e impares. 
//Deve-se interromper a leitura dos dados quando for digitado um valor negativo.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    //Definindo Vari�veis
    int i = 1;
    int pares = 0;
    int impares = 0;
    int somapares = 0;
    int somaimpares = 0;
    int mediaPares;
    int mediaImpares;
    int valor;

    //Solicitando dados
        do
        {
        printf("Informe o %i� valor: ", i);
        scanf("%i", &valor);

        if (valor > 0)
        {
        if (valor %2 == 0)
        {
            pares ++;
            somapares += valor;
        } else {
            impares ++;
            somaimpares += valor;
        }

        i++;
        }
        


        } while (valor > 0);

        mediaPares = somapares / pares;
        mediaImpares =  somaimpares / impares;


printf("Quantidade de n�meros pares: %i \n", pares);
printf("Quantidade de n�meros impares: %i \n", impares);
printf("M�dia de n�meros pares: %i \n", mediaPares);
printf("M�dia de n�meros impares: %i ", mediaImpares);




return 0;

}