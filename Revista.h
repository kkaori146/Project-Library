// Classe

class Revista
{
public:
	Revista();
	Revista(unsigned int codigo, char titulo[], char editora[], unsigned int paginas, unsigned int ano, unsigned int mes);
	~Revista();

	void setCodigo(unsigned int codigo);
	unsigned int getCodigo();

	void setTitulo(char titulo[]);
	char *getTitulo();

	void setEditora(char editora[]);
	char *getEditora();

	void setPaginas(unsigned int paginas);
	unsigned int getPaginas();

	void setAno(unsigned int ano);
	unsigned int getAno();

	void setMes(unsigned int mes);
	unsigned int getMes();

private:
	unsigned int codigo;
	char titulo[100];
	char editora[60];
	unsigned int paginas;
	unsigned int ano;
	unsigned int mes;
};