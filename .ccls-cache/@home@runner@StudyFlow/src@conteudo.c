#include "../include/conteudo.h"

typedef struct conteudo tema;

int salvar(conteudo *assunto, int totaltema, char nome[]){
FILE *arquivo = fopen(nome, "wt");
if(arquivo == NULL){
  printf("Erro! Ao abrir o arquivo\n");
  return -1;
}
printf("\n%d\n", totaltema);
for(int i = 0; i < totaltema; i++){
  fprintf(arquivo, "%s %d", assunto[i].tema, assunto[i].questao);
}
fclose(arquivo);
return 1;
}

int carregar(conteudo **assunto, int *totaltema, char nome[]){
  *assunto = (conteudo *) malloc(20 * sizeof(conteudo *));
  *totaltema = 0;
  FILE *arquivo = fopen(nome, "r");
  if(assunto == NULL){
    printf("Erro! ao alocar memória\n");
    return -1;
  }

  while(fscanf(arquivo, "%s %d", (*assunto)[*totaltema].tema, &(*assunto)[*totaltema].questao) == 2){
    (*totaltema) ++;
  }
  fclose(arquivo);
  return 1;
}

int novotema(conteudo **assunto, int *totaltema){
  int tamanho = (*totaltema) + 1;
  conteudo * novaloca = (conteudo *)  realloc(*assunto, tamanho * sizeof(conteudo));
  if(novaloca == NULL){
    printf("ERRO! na Ralocação\n");
  }
  *assunto = novaloca;

  conteudo * tema = (conteudo *) malloc(sizeof(conteudo));
  if(tema == NULL){
    printf("ERRO! na Alocação\n");
  }

  printf("Digite O tema estudado: ");
  scanf("%s", tema->tema);
  printf("Digite total de questão feita: ");
  scanf("%d", &tema->questao);

  (*assunto)[*totaltema] = *tema;
  (*totaltema) ++;
  free(tema);
  
  return 1;
}

void mostrar(conteudo *tema, int tamanho){
  for(int i = 0; i < tamanho; i++){
    printf("\n\nAssunto Estudado: %s\nTotal de Questão %d\n\n", tema[i].tema, tema[i].questao);
  }
  return;
}