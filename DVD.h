//classe
class DVD
{
public:
	DVD();
	DVD(unsigned int codigo, char titulo[], unsigned int discos, unsigned int duracao, unsigned int regiao, char legendas[]);
	~DVD();

	void setCodigo(unsigned int codigo);
	unsigned int getCodigo();

	void setTitulo(char titulo[]);
	char *getTitulo();

	void setDiscos(unsigned int discos);
	unsigned int getDiscos();

	void setDuracao(unsigned int duracao);
	unsigned int getDuracao();

	void setRegiao(unsigned int regiao);
	unsigned int getRegiao();

	void setLegendas(char legendas[]);
	char *getLegendas();

private:
	unsigned int codigo;
	char titulo[100];
	unsigned int discos;
	unsigned int duracao;
	unsigned int regiao;
	char legendas[50];
};

