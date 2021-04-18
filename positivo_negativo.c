#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    printf("Executando Programa...\n\n");
    sleep(2);
    
  int num;
  printf("Digite um número: """);
    scanf("%d",&num);
   if (num > 0)
   {
       printf("O número é positivo\n\n");
   }
   else
   {
       printf("O número é negativo\n\n");
   }
   
  printf("Encerrando Programa...\n\n");
  sleep(2);

    return 0;
}
