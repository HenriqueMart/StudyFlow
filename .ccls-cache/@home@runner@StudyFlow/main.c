#include <stdio.h>

int main(void) {
  int opcao = 0;
  do{
    
    printf("Ola usuário! Bem vindo ao seu painel de estudo\n");
    printf("Escolhas umas das opção a baixo:\n");
    printf("\n\t1 - Novo assunto estudado\n");
    printf("\t2 - Mostrar todos os conteúdo estudados\n");
    printf("\t0 - Sair\n");
    scanf("%d", &opcao);
  
    switch(opcao){
      case 1:
        
      break;
      case 2:
  
      break;
      case 3:
  
      break;
    }
    system("clear");
  }while(opcao != 0);
  return 0;
}