#include <stdlib.h>
#include "auxiliar.h"

Mapa* cria(void)
{
	return NULL;
}

Mapa* cria_no(int chave)
{
	Mapa* no = (Mapa*)malloc(sizeof(Mapa));
	no->chave = chave;
	no->esq = NULL;
	no->dir = NULL;
	return no;
}

Mapa* inserir(Mapa* raiz, int chave)
{
	if (raiz == NULL)
	{
		return cria();
	}
	else if (chave < raiz->chave)
	{
		raiz->esq = inserir(raiz->esq, chave);
	}
	else if (chave > raiz->chave)
	{
		raiz->dir = inserir(raiz->dir, chave);
	}
	return raiz;
}
