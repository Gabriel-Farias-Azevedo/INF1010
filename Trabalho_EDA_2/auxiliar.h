
typedef struct smapa Mapa;

struct smapa {
	int chave;
	Mapa* esq;
	Mapa* dir;
};

Mapa* cria(void);
Mapa* cria_no(int chave);
Mapa* inserir(Mapa* raiz, int chave);