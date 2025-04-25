#include <stdio.h>
#include <stdlib.h>
#include "auxiliar.h"

int main(void)
{
	Mapa* raiz = cria();
	int chaves[] = { 1, 6, 8, 7, 11, 15, 22, 21, 5, 20, 10 };
	int n = sizeof(chaves) / sizeof(chaves[0]);

	for (int i = 0; i < n; i++)
	{
		raiz = inserir(raiz, chaves[i]);
	}

	return 0;
}