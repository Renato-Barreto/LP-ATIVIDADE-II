#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    int numero=0; 
    int i;

     do
     {
    
    printf("Digite um número para iniciar a contagem regressiva: \n");
    scanf("%d", &numero);

    if (numero <= 0)
    {
      printf("Número inválido! Digite novamente: \n"); 
    }
    
    
     } while (numero <= 0);
     

    printf("\nIniciando contagem...\n");
    sleep(3);

      for ( i = numero; i >= 0 ; i--)
      {
      printf("%d\n", i);
      sleep (1);
      }
      
    
    
    return 0;
}