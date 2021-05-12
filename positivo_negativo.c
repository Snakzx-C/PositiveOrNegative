#include <stdio.h>       // inculsão 
#include <stdlib.h>      //    de
#include <unistd.h>      //  bibliotecas 

//Coded by SN4Kx00!! slovac

int main(){
  system("clear"); //limpa o console

  int num; //declaro a variavel (num)
  printf("Digite um número: "); //imprimo o texto escolhido na tela (sujeito a modificações ou inserções)
  scanf("%d", &num); // inserção de texto

  if (num == 0){
      printf("o número é neutro\n");
  }
  else
  {
    if (num > 0)
    {
      printf("o número é positivo\n");
    }
    else
    {
      printf("o número é negativo\n");
    }
    
  }

}
