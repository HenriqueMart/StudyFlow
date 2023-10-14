#ifndef CONTEUDO.H
#define CONTEUDO.H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20
  
typedef struct{

  char tema[MAX];
  int questao;
}conteudo;

int novotema(conteudo **assunto, int *totaltema);

void mostrar(conteudo *tema, int tamanho);

int salvar(conteudo *assunto, int totaltema, char nome[]);

int carregar(conteudo **assunto, int *totaltema, char nome[]);

#endif