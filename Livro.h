//classe
class Livro
{
public:
	Livro();
	Livro(unsigned int codigo, char titulo[], char editora[], unsigned int paginas, char isbn[]);
	~Livro();

	unsigned int getCodigo();
	char *getTitulo();
	char *getEditora();
	unsigned int getPaginas();
	char *getIsbn();

private:
	unsigned int codigo;
	char titulo[100];
	char editora[60];
	unsigned int paginas;
	char isbn[20];
};

