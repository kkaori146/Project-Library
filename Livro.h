//classe
class Livro
{
public:
	Livro();
	Livro(unsigned int codigo, char titulo[], char editora[], unsigned int paginas, char isbn[]);
	~Livro();

	void setCodigo(unsigned int codigo);
	unsigned int getCodigo();

	void setTitulo(char titulo[]);
	char *getTitulo();

	void setEditora(char editora[]);
	char *getEditora();

	void setPaginas(unsigned int paginas);
	unsigned int getPaginas();

	void setIsbn(char isbn[]);
	char *getIsbn();

private:
	unsigned int codigo;
	char titulo[100];
	char editora[60];
	unsigned int paginas;
	char isbn[20];
};

