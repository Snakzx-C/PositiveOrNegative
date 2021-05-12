#include <stdio.h>       // inculsão 
#include <stdlib.h>      //    de
#include <unistd.h>      //  bibliotecas 

//Coded by SN4Kx00!! slovac

int main(){
  system("clear"); //limpa o console
  printf("Iniciando programa...\n\n");
  sleep(1);

  int num; //declaro a variavel (num)
  printf("Digite um número: "); //imprimo o texto escolhido na tela (sujeito a modificações ou inserções)
  scanf("%d", &num); // inserção de texto

  if (num == 0){ //verifica se o numero é igual a zero
      printf("o número é neutro\n\n");
  }
  else //se o numero nao for igual a zero ele parte para as linhas de comando abaixo
  {
    if (num > 0) //verfica se o numero é maior que zero 
    {
      printf("o número é positivo\n\n");
    }
    else //verifica se o numero é negativo
    {
      printf("o número é negativo\n\n");
    }
    
  }

  printf("fim do programa...\n\n");
  sleep(1);

}
