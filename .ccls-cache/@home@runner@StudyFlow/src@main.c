#include "../include/conteudo.h"

int main(void) {
  int opcao = 0, totaltema = 0;
  conteudo *assunto = NULL;
  char nome[20] = "date/assunto.txt";
  do{
    
    printf("Ola usuário! Bem vindo ao seu painel de estudo\n");
    printf("Escolhas umas das opção a baixo:\n");
    printf("\n\t1 - Novo assunto estudado\n");
    printf("\t2 - Mostrar todos os conteúdo estudados\n");
    printf("\t0 - Sair\n");
    scanf("%d", &opcao);
    system("pause");
    system("clear");
    
    switch(opcao){
      case 1:
        if(novotema(&assunto, &totaltema) == 1){
          printf("Salvor com sucesso!\n\n");
        }else{
          printf("ERRO AO SALVAR NOVO TEMA\n\n");
        }
      break;
      case 2:
        mostrar(assunto, totaltema);
      break;
      case 3:
        if(salvar(assunto, totaltema, nome)==1){
          printf("\nSalvo com sucesso\n\n");
        }
      break;
      case 4:
        if(carregar(&assunto, &totaltema, nome) == 1){
          printf("\nCarregado comm sucesso!\n\n");
        }
      break;
    }
  }while(opcao != 0);
  return 0;
}