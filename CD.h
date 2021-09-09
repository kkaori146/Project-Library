// Classe

class CD
{
public:
	CD();
	CD(unsigned int codigo, char titulo[], unsigned int discos, unsigned int duracao, unsigned int faixas);
	~CD();

	void setCodigo(unsigned int codigo);
	unsigned int getCodigo();

	void setTitulo(char titulo[]);
	char *getTitulo();

	void setDiscos(unsigned int discos);
	unsigned int getDiscos();

	void setDuracao(unsigned int duracao);
	unsigned int getDuracao();

	void setFaixas(unsigned int faixas);
	unsigned int getFaixas();

private:
	unsigned int codigo;
	char titulo[100];
	unsigned int discos;
	unsigned int duracao;
	unsigned int faixas;
};