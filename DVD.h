//classe
class DVD
{
public:
	DVD();
	DVD(unsigned int codigo, char titulo[], unsigned int discos, unsigned int duracao, unsigned int regiao, char legendas[]);
	~DVD();

	unsigned int codigo;
	char titulo[100];
	unsigned int discos;
	unsigned int duracao;
	unsigned int regiao;
	char legendas[50];
};

