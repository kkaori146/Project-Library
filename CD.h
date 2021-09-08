// Classe

class CD
{
public:
	CD();
	CD(unsigned int codigo, char titulo[], unsigned int discos, unsigned int duracao, unsigned int faixas);
	~CD();

	unsigned int codigo;
	char titulo[100];
	unsigned int discos;
	unsigned int duracao;
	unsigned int faixas;
};